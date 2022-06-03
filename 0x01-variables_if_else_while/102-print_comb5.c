#include <stdio.h>

/**
 * main - Program entry point
 * Description: Prints out a combo of
 * two digit numbers preceeded by '00'
 * Return: 0 (Success)
 */

int main(void)
{
	int tens, units, t, u;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = '0'; units <= '9'; units++)
		{
			for (t = tens; t <= '9'; t++)
			{
				for (u = units + 1; u <= '9'; u++)
				{
					putchar(tens);
					putchar(units);
					putchar(' ');
					putchar(t);
					putchar(u);

					if (!((tens == '9' && units == '8') && (t == '9' && u == '9')))
					{
					putchar(',');
					putchar(' ');
					}
				}
				u = units;
			}
		}
	}
	putchar('\n');
	return (0);
}
