#include <stdio.h>
#include "main.h"

/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */


int _printf(const char * format, ...)
{
	int i, p;
	va_list args;
	void (*c)(va_list);

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			c = get_func(format[i + 1]);
			s = c(args);	




		}

			i++;

	}
	va_end(args);
	return(0);
}
