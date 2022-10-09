#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * not_valid_input - catches bad imnput
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int not_valid_input(int argc, char *argv[])
{
	int i = 1;
	unsigned int j = 0;

	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int total, i;

	total = 0;
	if ((not_valid_input(argc, argv)))
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		total += atoi(argv[i]);
	printf("%d\n", total);
	return (0);
}
