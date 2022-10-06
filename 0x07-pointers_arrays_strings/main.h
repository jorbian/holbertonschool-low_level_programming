#ifndef MAIN_H
#define MAIN_H

/*
* File: Main.h
* Auth: Jonathan Boller
* Desc: Header containing declarations for all functions used in the
* 0x07-pointers_arrays_strings project thing
*/
void *_memset(void *s, int c, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *string, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
