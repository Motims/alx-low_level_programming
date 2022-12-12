#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
