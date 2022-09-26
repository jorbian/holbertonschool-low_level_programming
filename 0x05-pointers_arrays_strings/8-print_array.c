#include <stdio.h>

/**
 * print_array - a shameless ripoff of knrs verion of this function
 * @a: pointer to zeroeth character in array
 * @n: number of elements to print out 
 *
 * Return: does not return anytrhing
 */

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", *a);
        a++;
    }
}