#include <stdio.h>
#include <unistd.h>

/**
 * main - Program entry point
 * Description: Program writes a
 * quote to the standard error buffer
 * Return: Returns a 1 (Error) 
 * */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
