#include "main.h"
/**
 *
 *  jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 *
 *  n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 *
 *  and resets mins
 *
 *  Return: 0
 */
void jack_bauer(void)

{

		int h, i, j, k, l;

		for (h = 0; h <= 23; h++)
		{
			if (h < 10)
			{
				i = 0;
				j = h;
			}
			else
			{
				i = h / 10;
				j = h % 10;
			}
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(48 + i);
					_putchar(48 + j);
					_putchar(':');
					_putchar(48 + k);
					_putchar(48 + l);
					_putchar('\n');
				}
			}
		}
}
