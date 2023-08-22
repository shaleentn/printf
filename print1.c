#include "main.h"
#include <starg.h>
#include <stdio.h>

/**
  *_printf - produces output according to a format
  *@format: pointer to the string to be output
  *Return: number of characters to be printed
  */
int _printf(const char *format, ...)
{
	int i, j, m;
	char *string;
	char c;
	va_list l;

	m = strlen(format);

	va_start(l, format);

	j = 0;

	for (i = 0; i < m; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(l, int);
				j += printf("%c", c);
			}
			else if (format[i] == 's')
			{
				string = va_arg(l, char *);
				if (string == NULL)
					printf("nil");
				j += printf("%s", string);
			}
			else if (format[i] == '%')
				j += printf("%%");
		}
		else
			j += putchar(format[i]);
	}
	va_end(l);
	return (j);
}
