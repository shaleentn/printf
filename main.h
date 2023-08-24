#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_int(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_H*/
