#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)

{
	int i = 0;
	long j = 1, K = 2, sum = K;

	while (K + j < 4000000)
	{
	K += j;
	if (K % 2 == 0)
	sum += K;
	j = K - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
