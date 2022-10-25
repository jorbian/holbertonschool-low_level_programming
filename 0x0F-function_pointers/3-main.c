#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
* main - simple calculator programme to demonstrate the use of func pointerss
* @argc: number of arguments fed to program
* @argv: array containing
*
* Return: asdf asd fasd faasdf
*/
int main(int argc, char *argv[])
{
	int first_term, second_term;
	int (*operation)(int, int);

	first_term = atoi(argv[1]);
	second_term = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if ((argc != 4) || (argv[2][1]) || !operation)
	{
		printf("Error\x0a");
		exit(99);
	}

	printf("%d\x0a", operation(first_term, second_term));

	return (0);
}
