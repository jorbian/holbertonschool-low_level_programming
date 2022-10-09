#include <stdio.h>
#include <stdlib.h>
/**
 * main - ads f
 * @argc: number of arguments
 * @argv: asdf asdf
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, total, current_number;

	total = 0;
	current_number = 0;
	for (i = 0; i < argc; i++)
	{
		current_number = atoi(argv[i]);

		if (current_number)
		{
			total = total + current_number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d", total);

	return (0);
}
