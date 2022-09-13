#include <stdio.h>

/**
 * main - Program computes and prints
 * the sum of all the multiples of 3 or 5
 *
 * Return: Always 0 (Successful).
 */
int main(void)
{
	int n, sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
/*
 * printf("%d, ", n);
 */
		}
	}
	printf("\n%d.\n", sum);
	return (0);
}
