#include "main.h"
/**
* is_prime_number - adf asdf asdf asdf
* @n: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
int is_prime_number(int n)
{
	if (n <= 2 || n % 2 == 0)
		return (n == 2);
	return (is_prime_recursive(n, 3));
}

/**
* is_prime_recursive - adf asdf asdf asdf
* @n: asd fasdf asdf asdf sda fadsf adfs
* @i: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
int is_prime_recursive(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_recursive(n, i + 2));
}
