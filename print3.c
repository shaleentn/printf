#include "main.h"
/**
  *print_binary - outputs the number in binary
  *@num: the number to be converted
  *Return: void
  */
void print_binary(unsigned int num)
{
	char d;

	if (num > 1)
	{
		print_binary(num / 2);
	}
	 d = '0' + num % 2;
	write(1, &d, 1);
}
/**
  *_printf - prints output according to format
  *@format: pointer to the string to be output
  *Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int j, i, m;
	va_list l;
	char n;

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
				if (format[i] == 'b')
				{
					print_binary(va_arg(l, unsigned int));
					j += 1;
				}
			}
			else
			{
				n = format[i];
				write(1, &n, 1);
				j++;
			}
		}
	}
	va_end(l);
	return (j);
}
