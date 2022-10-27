#include "variadic_functions.h"

/**
* sum_them_all - function to print the sum of its integer parameters
* @n: varidicly inputed integers
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arguments;

	if (!n)
		return (NULL);

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);

	return (sum);
}

