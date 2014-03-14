#ifndef __UI_H__
#define __UI_H__

/* This header file contains user interface specific macros and
   function prorotypes.
 */

typedef enum ui_option_e {
    UI_GETSTUDENT_INFO  =    1,
    UI_LOOKUP_STUDENT,
    UI_PRINT_ALL_STUDENTS,
    UI_EXIT,

    /* Add new aptions above this line. */
    UI_OPTION_LAST
} ui_option_t;

#endif /* __UI_H__ */
