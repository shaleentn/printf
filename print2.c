#include "main.h"
/**
  *_printf - produces output according to format
  *@format: the pointer to the string to be output
  *Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
	int i, n, k, count;
	char buffer[1024];
	char c;
	va_list l;

	va_start(l, format);
	n = strlen(format);
	count = 0;
	for (i = 0; i < n; i++)
	{
		if (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'i' || format[i] == 'd')
				{
					k = va_arg(l, int);
					snprintf(buffer, sizeof(buffer), "%d", k);
					write(1, buffer, strlen(buffer));
					count += strlen(buffer);
				}
			}
			else
			{
				c = format[i];
				write(1, &c, 1);
				count++;
			}
		}
	}
	va_end(l);
	return (count);
}
