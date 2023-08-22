#include "main.h"
/**
  *_printf - produces output according to a format
  *@format: pointer to the string to be output
  *Return: number of characters to be printed
  */
int _printf(const char *format, ...)
{
	int i, j, m;
	char *string;
	char c, t;
	va_list l;

	m = strlen(format);
	va_start(l, format);
	j = 0;
	for (i = 0; i < m; i++)
	{
		if (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
				{
					c = va_arg(l, int);
					write(1, &c, 1);
					j++;
				}
				else if (format[i] == 's')
				{
					string = va_arg(l, char *);
					if (string == NULL)
						write(1, "nil", 3);
					write(1, string, strlen(string));
					j += strlen(string);
				}
				else if (format[i] == '%')
				{
					write(1, "%", 1);
					j++;
				}
			}
			else
			{
				t = format[i];
				write(1, &t, 1);
				j++;
			}
		}
	}
	va_end(l);
	return (j);
}
