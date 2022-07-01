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

	printf("Size of char: %ld\n",sizeof(char_type));
	printf("Size of int: %ld\n",sizeof(int_type)):
	printf("Size of long: %ld\n",sizeof(long_int));
	printf("Size of long long: %ld\n",sizeof(long_long));
	printf("Size of float: %ld\n",sizeof(float_type));
	return (0);
}
