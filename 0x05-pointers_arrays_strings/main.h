#ifndef MAIN_H
#define MAIN_H

/*
* File: Main.h
* Auth: Jonathan Boller
* Desc: Header containing declarations for all functions used in the
* 0x05-pointers_arrays_strings project thing
*/

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

void rev_string(char *s)
{
	int i, temp;
	int length = strlen(s);

	for (i = 0; (i < length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}


#endif
