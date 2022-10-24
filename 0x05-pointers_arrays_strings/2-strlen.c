#include "main.h"

/**
 * _strlen - is a function print a length of a string;
 * @s: var char
 * Return: always 0;
 */
int _strlen(char *s)
{
	int len = 0;

	while (s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

