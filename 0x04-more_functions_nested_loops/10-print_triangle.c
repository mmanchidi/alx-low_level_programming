#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 0, m, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (m = 0; m < size; m++)
			{
				if (m < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
