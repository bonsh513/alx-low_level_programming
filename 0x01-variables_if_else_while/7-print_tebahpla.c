#include <stdio.h>

/**
 * main - prints the alphabet in reverse.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
