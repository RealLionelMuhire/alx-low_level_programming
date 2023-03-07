#include "main.h"

/**
 * print_chessboard - print 8X8 chessboard
 * @a: point to array cointaining chess
 */

void print_chessboard(char (*a)[8])
{
	int r = 0, c;

	while (r < 8)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		r++;
		_putchar('\n');
	}
}
