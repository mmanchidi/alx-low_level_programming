#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < (n - 1); r++)
	{
		printf("%d, ", a[r]);
	}
	if (r == (n - 1))
	{
		printf("%d", a[n - 1])
	}
	printf("\n");
}
