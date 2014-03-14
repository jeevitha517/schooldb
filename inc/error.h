#ifndef __ERROR_H__
#define __ERROR_H__

typedef enum schooldb_error_e {
    SCHOOLDB_ERROR_NONE = 0,
    SCHOOLDB_ERROR_FILE_OPEN,
    SCHOOLDB_ERROR_FILE_WRITE,

    /* Add new error codes above this line. */
    SCHOOLDB_ERROR_LAST
} schooldb_error_t;
#endif /* __ERROR_H__ */
