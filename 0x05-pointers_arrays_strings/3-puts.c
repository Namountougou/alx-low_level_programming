#include "main.h"
/**
 * _puts - it is a function that prints a string
 * @str: var char
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar("\n");
}
