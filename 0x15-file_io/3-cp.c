#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: can't read form file %s\n"
#define ERR_NOWRITE "Error: can't write to %s\n"
#define ERR_NOCLOSE "Error: can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWSUR | S_IRGRP | S_IWGRP | S_IROTH)
