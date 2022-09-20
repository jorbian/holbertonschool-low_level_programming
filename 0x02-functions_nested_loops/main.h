
#ifndef MAIN_H
#define MAIN_H

/*
* File: Main.h
* Auth: Jonathan Boller
* Desc: Header containing declarations for all functions used in the
* 0x02-functions_nested_loops directory.
*/

#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_alphabet - function that prints the alphabet, in lowercase, followed
* by a new line.
*
* Return: It's a void function and by definition does not return anything.
*/
void print_alphabet(void)
{
    int n;

	for (n = 97; n <= 122; n++)
		_putchar(n);
	_putchar('\x0a');
}

