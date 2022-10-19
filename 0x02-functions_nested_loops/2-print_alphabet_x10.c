#include "main.h"
/**
 * print_alphabet_x10 -a function that write the alphabet from a to z x10
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, alp;

	alp = 0;

	while (alp < 10;)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		alp++;
		_putchar('\n');
	}
}
