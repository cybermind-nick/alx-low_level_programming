#include "main.h"

/**
 * main - Program entry point
 * Description - prints the alphabet in lowercase
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 'a';
	
	do
	{
		_putchar(i);
	} while(i <= 'z');
	_putchar('\n');
	
	return (0);
}
