#ifndef _FUNCTION_PRINTF_H_
#define _FUNCTION_PRINTF_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct modifier - mofifier fields collection
 * @flags: flags field composed of ['0', ' ', '#', '+', '-']
 * @width: width field, positive number
 * @precision: precision field positive number not including '.'
 * or -1 for '*'
 * @length: length field string composed of ['h', 'l']
 * @specifier: specifier character can one of
 * ['c', 's', '%', 'd', 'i', 'b', 'u', 'o', 'x', 'X', 'S', 'p', 'r', 'R']
 *
 */
typedef struct modifier
{
	char *flags;
	int width;
	int precision;
	char *length;
	char specifier;
} modifier_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
