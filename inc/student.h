#ifndef __STUDENT_INFO_H__
#define __STUDENT_INFO_H__

#include <stdint.h>

#define true         1
#define false        0
#define NAME_SIZE    50

typedef struct address_s {
    uint32_t house_num;
    uint8_t  street[2*NAME_SIZE];
    uint8_t  city[NAME_SIZE];
    uint8_t  state[NAME_SIZE];
    uint32_t zip_code;
} address_t;

typedef struct dob_s {
    uint16_t month;
    uint16_t date;
    uint16_t year;
} dob_t;

typedef struct student_s {
    uint32_t roll_num;
    uint8_t name[NAME_SIZE];
    uint8_t father_name[NAME_SIZE];
    uint8_t mother_name[NAME_SIZE];
    address_t addr;
    uint8_t gender;
    dob_t dob;
} student_t;

typedef struct marks_s {
    int eng;    
    int tel;
    int hindi;
    int math;
    int sci;
    int soc;
} marks_t;

#endif /* __STUDENT_INFO_H__ */
