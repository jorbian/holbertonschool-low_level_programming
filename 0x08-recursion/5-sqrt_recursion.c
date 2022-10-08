#include "main.h"
#include <math.h>

/**
* _sqrt_recursion - adf asdf asdf asdf
* @n: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
int _sqrt_recursion(int n)
{
	double x = (double)n;

	return ((int)((test(x, 1.0))));
}

/**
* test - adf asdf asdf asdf
* @test: asd fasdf asdf asdf sda fadsf adfs
* @guess: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
int test(double number, double guess)
{
	if (fabs(number - guess) < .001)
		return (guess);
	else
		return (test(number, ((guess + number / guess) / 2)));
}
