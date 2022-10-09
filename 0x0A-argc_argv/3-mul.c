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
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		printf("%d\n", (x * y));

		return (0);
	}
}
