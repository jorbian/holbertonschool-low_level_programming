#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function to print the sum of its integer parameters
* @n: varidicly inputed integers
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int i;

	va_list *arglist;

	if (!n)
		return (0);

	va_start(arglist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);
	va_end(arglist);

	return (sum);
}
