#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
;
	char *s3;

	while (s1[i] != '\x00')
		i++;

	while (n > 0)
	{
		i++;
		n--;
	}

	s3 = malloc(sizeof(char) * i);
	if (!s3)
		return (NULL);

	while (s1[j])
	{
		s3[j] = s1[j];
		j++;
		i--;
	}

	while (i)
	{
		s3[j] = s2[k];
		j++;
		i--;
		k++;
	}

	s3[j] = '\x00';

	return (s3);
}
