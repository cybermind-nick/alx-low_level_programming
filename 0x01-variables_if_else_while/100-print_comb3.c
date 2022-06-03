#include <stdio.h>

/**
 * main - Program entry point
 * Description: Program prints out smallest
 * ...combination of two digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int tens;
	int units;

	for (tens = '0'; tens < '9'; tens++)
	{
		for (units = tens + 1; units <= '9'; units++)
		{
			putchar(tens);
			putchar(units);

			if (tens != '8' || units != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
