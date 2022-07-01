#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char char_type;
	int int_type;
	long long_int;
	long long_long;
	float float_type;

	printf("Size of char: %lu\n",(unsigned int)sizeof(char_type));
	printf("Size of int: %lu\n",(unsigned int)sizeof(int_type)):
	printf("Size of long: %lu\n",(unsigned int)sizeof(long_int));
	printf("Size of long long: %lu\n",(unsigned int)sizeof(long_long));
	printf("Size of float: %lu\n",(unsigned int)sizeof(float_type));
	return (0);
}
