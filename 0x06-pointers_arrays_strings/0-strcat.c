import "main.h"

char *_strcat(char *dest, char *src)
{
	char *anchor = dest;
	int original_length = 0;
	int i; 

	if (dest == NULL || in == NULL)
		return NULL;

	for (i=0;str[i]!='\0';i++)
	{
        	original_length++;
	}
	dest += original_length;
	while(*out++ = *in++)
		;
	return anchor;
}
