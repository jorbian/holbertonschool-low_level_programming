#include <stdio.h>
#include <string.h>

void revstr(char *str1)
{
	int i, len, temp;

	len = strlen(str1);

	for (i = 0; (i < len / 2); i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}

int main()
{
	char str[7];

	printf("ENTER THE STRING: ");
	gets(str);

	printf("\nBEFORE REVERSING STRING: %s\n", str);
	revstr(str);
	printf("AFTER REFERSING STRING: %s", str);
}
