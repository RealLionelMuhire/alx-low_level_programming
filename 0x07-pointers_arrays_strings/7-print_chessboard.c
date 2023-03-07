#include "main.h"

/**
 * print_chessboard - print 8X8 chessboard
 * @a: point to array cointaining chess
 */

void print_chessboard(char (*a)[8])
{
	int r = 0, c = 0;

	for (; r < 8; r++)
	{
		for (; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
