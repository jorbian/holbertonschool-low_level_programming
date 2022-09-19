#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\x0a", n);
	else if (n < 0)
		printf("%d is negative\x0a", n);
	else
		printf("%d is zero\x0a", n);

	return (0);
}
