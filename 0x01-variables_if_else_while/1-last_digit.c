#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - The ritually descriptor
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\x0a", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\x0a", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\x0a", n, last_digit);
	}

	return (0);
}

