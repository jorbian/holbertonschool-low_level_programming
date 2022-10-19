#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	unsigned int total_size;

	if (!size || !nmemb)
		return (NULL);
	total_size = nmemb * size;
	p = malloc(total_size);
	if (!p)
		return (NULL);

	i = 0;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}

