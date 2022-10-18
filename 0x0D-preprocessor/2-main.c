#include <stdio.h>
/**
 * main - 'function to print the name of the program
 * @argc: the number of arguments
 * @argv: array containing the arguments
 *
 * Return: 0
**/
int main(int argc, char ** argv)
{
	if (argc)
		printf("%s", argv[0]);
	
	return 0;
}
