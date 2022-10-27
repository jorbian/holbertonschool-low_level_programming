#include "variadic_functions.h"

void print_char(va_list arguments);
void print_int(va_list arguments);
void print_float(va_list arguments);
void print_string(va_list arguments);

/**
 * print_char - exactly what it says on the tin
 * @arguments: char to print
 * Return: void
 */
void print_char(va_list arguments)
{
	char character;

	character = va_arg(arguments, int);
	printf("%c", character);

}


/**
 * print_int - exactly what it says on the tin
 * @arguments: number to print
 * Return: void
 */
void print_int(va_list arguments)
{
	int integer_num;

	integer_num = va_arg(arguments, int);
	printf("%d", integer_num);

}


/**
 * print_float - exactly what it says on the tin
 * @arguments: numbr to print
 * Return: void
 */
void print_float(va_list arguments)
{
	float float_num;

	float_num = va_arg(arguments, double);
	printf("%f", float_num);

}


/**
 * print_string - exactly what it says on the tin
 * @arguments: string to print
 * Return: void
 */
void print_string(va_list arguments)
{
	char *string;

	string = va_arg(arguments, char*);
	if (!string)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}


/**
 * print_all - main thing we're worried about here
 * @format: format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i, j;
	char *seperator;
	print_s s[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_string}
	};

	va_start(arguments, format);
	i = 0;
	seperator = "";
	while (format && format[i])
	{
		j = 0;
		while (j <  4 && format[i] != *(s[j].symbol))
			j++;

		if (j < 4)
		{
			printf("%s", seperator);
			s[j].pointer(arguments);
			seperator = ", ";
		}

		i++;
	}
	va_end(arguments);

	printf("\x0a");
}
