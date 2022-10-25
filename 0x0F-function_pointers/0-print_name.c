#include "function_pointers.h"

/**
* print_name - a function to print a name either upper or lowercase
* @name: the name
* @f: a pointer to the function to determine how to print it
*
* Return: doesn't return anything
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

