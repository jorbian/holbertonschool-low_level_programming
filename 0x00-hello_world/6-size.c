#include <stdio.h>
/**
* main - I died a little inside when I realised whqt was necessary
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/

int main(void)
{
	printf("Size of a char: %d byte(s)\x0a", sizeof(char));
	printf("Size of an int: %d byte(s)\x0a", sizeof(int));
	printf("Size of a long int: 4 byte(s)\x0a", sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\x0a", sizeof(long long int));
	printf("Size of a float: %d byte(s)\x0a", sizeof(float));
	fprintf(stderr, "Fuck you");
	return (0);
}
