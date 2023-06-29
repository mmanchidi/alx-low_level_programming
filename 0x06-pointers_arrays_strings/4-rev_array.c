#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: input value
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n--; c++)
	{
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}


