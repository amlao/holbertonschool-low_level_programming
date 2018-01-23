#include "holberton.h"

void jack_bauer(void)
{
	int w, x, y, z;

	for (w = '0'; w <= '2'; w++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '6'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (w & x < 24) && (y & z < 60)
						{
							_putchar(w);
							_putchar(x);
							_putchar(':');
							_putchar(y);
							_putchar(z);
						}
				}
			}
		}
	}
	return (0);
}
