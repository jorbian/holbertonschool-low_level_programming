#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *string1, char *string2, unsigned int num_bytes);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
