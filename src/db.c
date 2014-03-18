#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include "../inc/student.h"
#include "../inc/db.h"
#include "../inc/error.h"

#define STUDENT_INFORMATION "./studentinfo.dbs"

schooldb_error_t
db_add_student (student_t *s)
{
    FILE *db_stu_fs;
    int written_bytes;

    db_stu_fs = fopen(STUDENT_INFORMATION, "a+");
    if (db_stu_fs == NULL) {
        printf("Error in opening file\n");
        return SCHOOLDB_ERROR_FILE_OPEN;
    }

    written_bytes = fprintf(db_stu_fs, "%50s %50s %50s %10u %100s %50s %50s"
                            " %5u %c %2u %2u %4u\n",s->name, s->father_name,
                            s->mother_name, s->addr.house_num, s->addr.street,
                            s->addr.city, s->addr.state, s->addr.zip_code,
                            s->gender, s->dob.month, s->dob.date, s->dob.year);
    if(written_bytes <= 0) {
        printf("Error in writting\n");
        return SCHOOLDB_ERROR_FILE_WRITE;
    }

    fclose(db_stu_fs);

    return SCHOOLDB_ERROR_NONE;
}    

schooldb_error_t
db_get_student (char *name, student_t *s)
{
    FILE *db_stu_fs;
    int read_bytes;

    db_stu_fs = fopen(STUDENT_INFORMATION, "r");
    if (db_stu_fs == NULL) {
        printf("Error in opening file\n");
        return SCHOOLDB_ERROR_FILE_OPEN;
    }
    
    while ((read_bytes = fscanf(db_stu_fs, "%50s %50s %50s %10u %100s %50s %50s"
                            " %5u %c %2"SCNd16" %2"SCNd16" %4"SCNd16"\n",(char *)&s->name,
                            (char *) &s->father_name,(char *) &s->mother_name, 
                            &s->addr.house_num, (char *) &s->addr.street,
                            (char *) &s->addr.city, (char *) &s->addr.state, 
                            &s->addr.zip_code, &s->gender, 
                            &s->dob.month, &s->dob.date, &s->dob.year)) != EOF) {
        if (read_bytes <= 0) {
            printf("Error in reading\n");
            fclose(db_stu_fs);
            return SCHOOLDB_ERROR_FILE_READ;
        }

        if(strcmp(name, (char *)s->name) == 0) {
            break;
        }
    }

    fclose(db_stu_fs);
    
    if (read_bytes == EOF) {
        return SCHOOLDB_ERROR_NAME_NOTFOUND;
    }

    return SCHOOLDB_ERROR_NONE;
}

