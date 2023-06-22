#include "main.h"
/**
   * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
   * followed by a new line.
   * Return: Always 0
 */
void more_numbers(void)
{
	int b,c = 0;

	for (;c < 10; c++)
	{
		for (b = 0; b <= 14; b++)
		{
			if(b > 9)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
