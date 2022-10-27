#include "variadic_functions.h"
/**
 * print_numbers - functions that prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));
		if ((separator) && (i != (n - 1)))
			printf("%s", separator);
	}
	va_end(arguments);

	printf("\x0a");
}
