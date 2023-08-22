#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
/*Macros that take value x and constant of size 1024*/
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* constants for formating options */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES for different datatypes */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Structure definitions
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

/* Function to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
#endif /* MAIN_H */
