#include <stdio.h>
/**
* main - I NEED TO COME BACK TO THIS LATERRRR!!!
* @void: I can't imagine any of our projects taking arguments
*
* Return: 0 I can't imagine main ever returning anything...
*/

int main(void)
{

	char head[10] = "Size of a";
	char foot[10] =  "byte(s)\x0a";
	char data_TypE[5][18] = {
		" char: %d",
		"n int: %d",
		" long int: %d",
		" long long int: %d",
		" float: %d"
	};

	for (int i = 0; i <= 5; i++) {
		char with_size[255] = data_TypE[i], sizeof(char);
		printf("%s%s%s", head, with_size, foot);
	}

	return (0);
}
