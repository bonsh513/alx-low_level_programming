#include <stdio.h>

/**
 * main - print 0-9 with use of only putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
