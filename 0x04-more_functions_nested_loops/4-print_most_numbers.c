#include "main.h"

/**
 * print_most_numbers - Prints 0 - 9, except 2 and 4
 *
 *
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int jay;

	for (jay = '0'; jay <= '9'; jay++)
	{
		if (jay == '2' || jay == '4')
		{
			continue;
		}
		_putchar (jay);
	}
	_putchar ('\n');
}
