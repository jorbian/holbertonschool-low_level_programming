#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
* main - simple calculator programme to demonstrate the use of func pointerss
* @argc: number of arguments fed to program
* @argv: array containing
*
* Return: asdf asd fasd faasdf
*/
int main(int argc, char *argv[])
{
	int first_term, second_term, answer;
	int exit_code;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
		exit_code = 98;

	first_term = atoi(argv[1]);
	second_term = atoi(argv[3]);
	get_op = argv[2];

	if (!get_op_func(argv[2]) || argv[2][1])
	{
		exit_code = 99;
	}
	else if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		exit_code = 100;
	}
	else
	{
		exit_code = 0;
	}

	if (exit_code)
	{
		printf("Error\x0a");
		exit(exit_code);
	}

	res = get_op_func(get_op);
	answer = res(first_term, second_term);

	printf("%d\n", answer);
	return (0);
}
