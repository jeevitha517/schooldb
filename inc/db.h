#ifndef __DB_H__
#define __DB_H__

#include "error.h"

extern schooldb_error_t
db_add_student(student_t *s);

/*Before calling this function caller should allocate memory for s */
extern schooldb_error_t
db_read_student_details(char *name, student_t *s);

#endif /* __DB_H__ */
