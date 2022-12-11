#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
