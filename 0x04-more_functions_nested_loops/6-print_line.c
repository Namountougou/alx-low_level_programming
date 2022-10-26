#include "main.h"

/**
 * print_line - a fonction that draws a straight line
 * @n: var
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
