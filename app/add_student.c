#include <stdio.h>
#include "../inc/student.h"

schooldb_error_t
db_add_student (student_t *s)
{
    FILE *my_stream;
    
    my_stream = fopen("/home/jeevitha/schooldb_03_12_2014/app/studentinfo.dbs", "a+");

    fprintf(my_stream, "%50s %50s %50s %100s %10u %50s %50s %5u %c %3u %2u %2u %4u\n",s.name, s.father_name, s.mother_name, s.addr.street_name, s.addr.house_num, s.addr.city, s.addr.state, s.addr.zip_code, s.gender, s.age, s.dob.date, s.dob.month, s.dob.year);

    fclose(my_stream);
}    
    
