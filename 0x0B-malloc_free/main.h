#ifndef MAIN_H
#define MAIN_H

/*
* File: Main.h
* Auth: Jonathan Boller
* Desc: Header containing declarations for all functions used in the
* 0x05-pointers_arrays_strings project thing
*/

char *create_array(unsigned int size, char c);
char *_strdup(char *string);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
