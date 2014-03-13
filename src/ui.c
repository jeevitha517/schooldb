#include <stdio.h>
#include "../inc/student.h"

#define DETAILS        1
#define UNIT_MARKS     2
#define QUART_MARKS    3
#define HALFERLY_MARKS 4
#define ANNUAL_MARKS   5
#define PRIM_DETAILS   6
#define EXIT           7

int
main()
{
    int option, opt;
    student_t s;
    marks_t m;

    while(1) {
        printf("\n\n");
        printf("%d. Details to be provided by student while joining : \n", DETAILS);
        printf("%d. Marks to be provided for Unit Tests : \n", UNIT_MARKS);
        printf("%d. Marks to be provided for Quarterly Exams : \n", QUART_MARKS);
        printf("%d. Marks to be provided for Halferly Exams : \n", HALFERLY_MARKS);
        printf("%d. Marks to be provided for Annual Exams : \n", ANNUAL_MARKS);
        printf("%d. Print Primary Details of the student : \n", PRIM_DETAILS);
        printf("%d. Exit : \n", EXIT);

        printf("Enter an option : ");
        scanf("%d", &option);
        printf("\n");
        switch(option) {
            case DETAILS:
                printf("Enter the name of the student : \n");
                scanf("%s", &s.name);
                printf("Enter Father's name of the student : \n");
                scanf("%s", &s.father_name);
                printf("Enter Mother's name of the student : \n");
                scanf("%s", &s.mother_name);
                printf("Enter address of the student : \n");
                printf("Enter street name of the student : \n");
                scanf("%s", &s.addr.street_name);
                printf("Enter house number of the student : \n");
                scanf("%d", &s.addr.house_num);
                printf("Enter zip code of the student : \n");
                scanf("%d", &s.addr.zip_code);
                printf("Enter age of the student : \n");
                scanf("%d", &age);
                printf("Enter gender of the student : \n");
                scanf("%c", &gender);
                printf("Enter Date of Birth of the student : \n");    
                scanf("%d", &dob);
            
                break;

            case UNIT_MARKS:
                printf("1. First Unit Test Marks : ");
                printf("2. Second Unit Test Marks : ");
                printf("3. Third Unit Test Marks : ");
                
                printf("Enter an option to select which unit test marks required : ");
                scanf("%d\n", &opt);
                printf("\n");
                switch(option) {
                    case 1:
                        printf("Enter marks in English : \n");
                        scanf("%d", &m.eng);
                        printf("Enter marks in Telugu: \n");
                        scanf("%d", &m.tel);
                        printf("Enter marks in Hindi: \n");
                        scanf("%d", &m.hindi);
                        printf("Enter marks in Maths: \n");
                        scanf("%d", &m.math);
                        printf("Enter marks in Science: \n");
                        scanf("%d", &m.sci);
                        printf("Enter marks in Social: \n");
                        scanf("%d", &m.soc);
                
                        break;

                    case 2:
                        printf("Enter marks in English : \n");
                        scanf("%d", &m.eng);
                        printf("Enter marks in Telugu: \n");
                        scanf("%d", &m.tel);
                        printf("Enter marks in Hindi: \n");
                        scanf("%d", &m.hindi);
                        printf("Enter marks in Maths: \n");
                        scanf("%d", &m.math);
                        printf("Enter marks in Science: \n");
                        scanf("%d", &m.sci);
                        printf("Enter marks in Social: \n");
                        scanf("%d", &m.soc);

                        break;

                    case 3:
                        printf("Enter marks in English : \n");
                        scanf("%d", &m.eng);
                        printf("Enter marks in Telugu: \n");
                        scanf("%d", &m.tel);
                        printf("Enter marks in Hindi: \n");
                        scanf("%d", &m.hindi);
                        printf("Enter marks in Maths: \n");
                        scanf("%d", &m.math);
                        printf("Enter marks in Science: \n");
                        scanf("%d", &m.sci);
                        printf("Enter marks in Social: \n");
                        scanf("%d", &m.soc);

                        break;

                    default:
                        printf("Invalid option : \n");
                        break;
                }

            case QUART_MARKS:
                        printf("Enter marks in English : \n");
                        scanf("%d", &m.eng);
                        printf("Enter marks in Telugu: \n");
                        scanf("%d", &m.tel);
                        printf("Enter marks in Hindi: \n");
                        scanf("%d", &m.hindi);
                        printf("Enter marks in Maths: \n");
                        scanf("%d", &m.math);
                        printf("Enter marks in Science: \n");
                        scanf("%d", &m.sci);
                        printf("Enter marks in Social: \n");
                        scanf("%d", &m.soc);

                        break;

            case HALFERLY_MARKS:
                        printf("Enter marks in English : \n");
                        scanf("%d", &m.eng);
                        printf("Enter marks in Telugu: \n");
                        scanf("%d", &m.tel);
                        printf("Enter marks in Hindi: \n");
                        scanf("%d", &m.hindi);
                        printf("Enter marks in Maths: \n");
                        scanf("%d", &m.math);
                        printf("Enter marks in Science: \n");
                        scanf("%d", &m.sci);
                        printf("Enter marks in Social: \n");
                        scanf("%d", &m.soc);

                        break;

            case ANNUAL_MARKS:
                        printf("Enter marks in English : \n");
                        scanf("%d", &m.eng);
                        printf("Enter marks in Telugu: \n");
                        scanf("%d", &m.tel);
                        printf("Enter marks in Hindi: \n");
                        scanf("%d", &m.hindi);
                        printf("Enter marks in Maths: \n");
                        scanf("%d", &m.math);
                        printf("Enter marks in Science: \n");
                        scanf("%d", &m.sci);
                        printf("Enter marks in Social: \n");
                        scanf("%d", &m.soc);

                        break;

            case PRIM_DETAILS:
                printf("%25s NAME, %25s FATHER'S NAME, %25s MOTHER'S NAME, %50s ADDRESS, %2d AGE, %c GENDER, %10d DOB\n");
                printf("%25s, %25s, %25s, %50s, %2d, %c, %10d\n", name, father_name, mother_name, address, age, gender, dob);

                break;
            
            default:
                printf("Invalid option : \n");
                break;
        }
    }

    return 0;
}

