#include <stdio.h>
#include "main.h"

/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/
int main(void)
{
	struct factor f1 = {3, "Fizz"};
	struct factor f2 = {5, "Buzz"};
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!((i % f1.num == 0) || (i % f2.num == 0))) 
		{
			printf("%d", i);
		}
		else
		{
			if (i % f1.num == 0) 
				printf("%s", f1.word_to_say);
			if (i % f2.num == 0) 
				printf("%s", f2.word_to_say);
		}
		putchar(' ');
	}

	return (0);
}
