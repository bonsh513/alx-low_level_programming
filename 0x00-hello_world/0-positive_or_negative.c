
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 * /

 int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
	printf ("%d is positive",&n);
	}
	else if (n<0)
	{
	printf ("%d is negative",&n);
	}
	else
	{
	printf ("%d id zero");
	}
	return (0);
}
