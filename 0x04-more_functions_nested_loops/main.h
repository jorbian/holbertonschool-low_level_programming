#ifndef MAIN_H
#define MAIN_H

/*
* File: Main.h
* Auth: Jonathan Boller
* Desc: Header containing declarations for all functions used in the
* 0x04-more_functions_nested_loops
*/

/**
* struct factor - Short description
* @num: First member
* @word_to_say: adsf adsf
*
* Description: Longer description
*/
struct factor
{
	int num;
	char word_to_say[8];
};

int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);

#endif
