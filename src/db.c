#include <stdio.h>
#include "../inc/student.h"
#include "../inc/db.h"
#include "../inc/error.h"

#define STUDENT_INFORMATION "./studentinfo.dbs"

schooldb_error_t
db_add_student (student_t *s)
{
    FILE *my_stream;
    int written_bytes;

    my_stream = fopen(STUDENT_INFORMATION, "a+");
    if (my_stream == NULL) {
        printf("Error in opening file\n");
        return SCHOOLDB_ERROR_FILE_OPEN;
    }

    written_bytes = fprintf(my_stream, "%50s %50s %50s %10u %100s %50s %50s"
                            " %5u %c %2u %2u %4u\n",s->name, s->father_name,
                            s->mother_name, s->addr.house_num, s->addr.street,
                            s->addr.city, s->addr.state, s->addr.zip_code,
                            s->gender, s->dob.month, s->dob.date, s->dob.year);
    if(written_bytes <= 0) {
        printf("Error in writting\n");
        return SCHOOLDB_ERROR_FILE_WRITE;
    }

    fclose(my_stream);

    return SCHOOLDB_ERROR_NONE;
}    

schooldb_error_t
db_read_student_details (char *name, student_t *s)
{
    FILE *my_stream;
    int read_bytes;

    my_stream = fopen(STUDENT_INFORMATION, "r");
    if (my_stream == NULL) {
        printf("Error in opening file\n");
        return SCHOOLDB_ERROR_FILE_OPEN;
    }
    
    while (read_bytes = fscanf(my_stream, "%50s %50s %50s %10u %100s %50s %50s"
                            " %5u %c %2u %2u %4u\n",&s->name, &s->father_name,
                            &s->mother_name, &s->addr.house_num, &s->addr.street,
                            &s->addr.city, &s->addr.state, &s->addr.zip_code,
                            &s->gender, &s->dob.month, &s->dob.date, &s->dob.year) != EOF) {
        if(name == s->name) {
            s = my_stream;      
        }
    }
    
    if (read_bytes <= 0) {
        printf("Error in reading\n");
        return SCHOOLDB_ERROR_FILE_READ;
    }

    fclose(my_stream);

    return SCHOOLDB_ERROR_NAME_NOTFOUND;
}

