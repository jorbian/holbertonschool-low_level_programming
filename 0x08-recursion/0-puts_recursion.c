#include <unistd.h>
#include "main.h"

/**
* _puts_recursion - adf asdf asdf asdf
* @string: asd fasdf asdf asdf sda fadsf adfs
*
* Return: asdf asdf asdf asdf
*/
void _puts_recursion(char *string)
{
	if (*string != '\x00')
		_putchar(*string);
		_puts_recursion(*string + 1);
}

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

