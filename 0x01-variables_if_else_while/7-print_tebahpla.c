#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0 (Sucess)
 */

int main(void)

{
	char i;
	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
