#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: RTFM
 * @argv: RTFM
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int total, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (total >= denominations[i])
		{
			total -= denominations[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
