#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	printf("size char: %zu\n", sizeof(char));
	printf("size int: %zu\n", sizeof(int));
	printf("size long: %zu\n", sizeof(long));
	printf("size long long: %zu\n", sizeof(long long));
	printf("size float: %zu\n", sizeof(float));
	return (0);
}
