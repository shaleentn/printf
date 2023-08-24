#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_integer(va_list arg);

#endif /* MAIN_H*/
