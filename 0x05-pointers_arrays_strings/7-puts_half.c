#include  "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The strng to print
 * Return: void
 */

void puts_half(char *str)

{
	int j = 0;
	int K;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	K = (j - 1) / 2;
	K += 1;
	}
	else
	{
	K = j / 2;
	}

	for (; j < K; K++)
	{
	_putchar(str[K]);
	}
	_putchar('\n');
}
