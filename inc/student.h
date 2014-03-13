
#ifndef __STUDENT_H__
#define __STUDENT_H__

typedef struct address_s {
    char street_name[100];
    int house_num;
    char city[50];
    char state[50];
    int zip_code;
} address_t;

typedef struct student_s {
    char name[50];
    char father_name[50];
    char mother_name[50];
    address_t addr;
    char gender;
    int age;
    date_of_birth_t dob;

} student_t;

typedef struct date_of_birth_s {
    int date;
    int month;
    int year;
} date_of_birth_t;

typedef struct marks_s {
    int eng;    
    int tel;
    int hindi;
    int math;
    int sci;
    int soc;
} marks_t;

#endif /* __STUDENT_H__ */
