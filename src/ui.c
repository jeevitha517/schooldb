#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "../inc/student.h"
#include "../inc/ui.h"
#include "../inc/error.h"

static void
ui_main_menu(void)
{
    printf("%2d -> New student admission\n", UI_GETSTUDENT_INFO);
    printf("%2d -> Print one student details\n", UI_LOOKUP_STUDENT);
    printf("%2d -> Print all students information\n", UI_PRINT_ALL_STUDENTS);
    printf("%2d -> EXIT from this application\n", UI_EXIT);
}

static ui_option_t
ui_get_main_option(void)
{
    int opt;
    printf("Enter operation: ");
    scanf("%d", &opt);
    return (ui_option_t)opt;
}

static schooldb_error_t
ui_read_student_admmission_info(student_t *st)
{
    char tmp[5];
    gets(tmp);

    /* FIXME Validate each parameter. */
    printf("Student Name : ");
    gets((char *)&st->name);

    printf("Gender (M/F) : ");
    scanf("%c", &st->gender);
    gets(tmp);

    printf("DOB - MM     : ");
    scanf("%"SCNd16"", &st->dob.month);
    printf("DOB - DD     : ");
    scanf("%"SCNd16"", &st->dob.date);
    printf("DOB - YYYY   : ");
    scanf("%"SCNd16, &st->dob.year);

    gets(tmp);
    printf("Father Name  : ");
    gets( (char *)&st->father_name);
    printf("Mother Name  : ");
    gets((char *)&st->mother_name);

    printf("Address - House#   : ");
    scanf("%d", &st->addr.house_num);

    gets(tmp);

    printf("Address - Street   : ");
    gets((char *)&st->addr.street);
    printf("Address - City     : ");
    gets((char *)&st->addr.city);
    printf("Address - State    : ");
    gets((char *)&st->addr.state);
    printf("Address - ZipCode  : ");
    scanf("%d", &st->addr.zip_code);
    gets(tmp);

    return SCHOOLDB_ERROR_NONE;
}

int
main()
{
    int exitFlag = false;
    schooldb_error_t err;
    student_t student;

    while(exitFlag == false) {
        printf("\n\n");
        ui_main_menu();
        switch(ui_get_main_option()) {
            case UI_GETSTUDENT_INFO:
                memset(&student, 0, sizeof(student));
                err = ui_read_student_admmission_info(&student);
                if (err != SCHOOLDB_ERROR_NONE) {
                    printf("Incorrect details entered for student during admission, %d", err);
                    break;
                }

                break;

            case UI_LOOKUP_STUDENT:
                break;

            case UI_PRINT_ALL_STUDENTS:
                break;

            case UI_EXIT:
                exitFlag = true;
                break;

            default:
                break;
        }
    }

    return 0;
}

