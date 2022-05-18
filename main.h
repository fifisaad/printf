#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * get_func - look for the specifier
 * 
 *
 */
int (*get_func(char x))(va_list args)
{
	int i = 0;
	spec arr[] = { 
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
