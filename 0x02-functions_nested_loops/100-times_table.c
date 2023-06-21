#include "main.h"

/**
 * print_times_table - prints times table for numbers from 0-14
 * @m: An input integer value
 * Return: Nothing
 */
void print_times_table(int m)
{
	int i, j;

	if (m > 0 && m < 15)
	{
		for (i = 0; i <= m; i++)
		{
			_putchar('0');
			for (j = 1; j <= m; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}

/**
 * putformat - formatted characters to output
 * @o: number to format
 * Return: nothing
 */
void putformat(int o)
{
	if (o <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(o + '0');
	}
	else if (o > 9 && o <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(o / 10 + '0');
		_putchar(o % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(o / 100 + '0');
		_putchar(o / 10 % 10 + '0');
		_putchar(o % 10 + '0');
	}
}
