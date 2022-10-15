#include "main.h"
/**
* print_chessboard - Print chessboard
* @pieces: exactly what it says on tin
*
* Return: it don't return nothing!!
*/
void print_chessboard(char (*pieces)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(pieces[i][j]);
		_putchar('\x0a');
	}
}

