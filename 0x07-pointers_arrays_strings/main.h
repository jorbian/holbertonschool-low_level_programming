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
char *_strpbrk(char *string, char *accepted_bytes);
char *_strstr(char *source_string, char *sub_string);
void print_chessboard(char (*pieces)[8])
void print_diagsums(int *a, int size);

#endif
