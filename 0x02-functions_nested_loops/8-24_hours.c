#include "main.h"

/**
 * jack_bauer - declared in "main.h"
 * Description: Prints every minute in a day
 * Return: void
 */

void jack_bauer(void)
{
	int hour_t, hour_u, min_t, min_u;

	for (hour_t = '0'; hour_t <= '2'; hour_t++)
	{
		for (hour_u = '0'; hour_u <= '4'; hour_u++)
		{
			for (min_t = '0'; min_t <= '5'; min_t++)
			{
				for (min_u = '0'; min_u <= '9'; min_u++)
				{
					_putchar(hour_t);
					_putchar(hour_u);
					_putchar(':');
					_putchar(min_t);
					_putchar(min_u);
					_putchar('\n');
				}
			}
		}
	}
}
