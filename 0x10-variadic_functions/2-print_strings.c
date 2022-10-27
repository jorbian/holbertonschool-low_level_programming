#include "variadic_functions.h"
/**
* print_strings - functions that prints strings followed by new line
* @separator: string to be printed between strings
* @n: numbers of strings passed to the function
*
* Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *string;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arguments, char*);

		if (string)
			printf("%s", "(nil)");
		else
			printf("%s", string);

		if ((separator) && (i != (n - 1)))
			printf("%s", separator);
	}
	va_end(arguments);

	printf("\x0a");
}
