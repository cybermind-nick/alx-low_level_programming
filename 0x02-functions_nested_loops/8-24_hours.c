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
				for (min_u = '0'; min <= '9'; min_u++)
				{
					putchar(hour_t);
					putchar(hour_u);
					putchar(':');
					putchar(min_t);
					putchar(min_u);
					putchar('\n');
				}
			}
		}
	}
}
