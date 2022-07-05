#include <stdio.h>

/**
 * main - prints all numbers of base 16.
 *
 * Return: 0 on success
 */
int main(void)
{
	int e = '0';

	while (e <= '9')
	{
		putchar(e);
		e++;
	}
	a = 'a';
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
