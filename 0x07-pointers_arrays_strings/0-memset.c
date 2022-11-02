#include "main.h"

/**
* _memset - fill n bytes of memory with a constant value
* @s: pointer to memory data
* @b: constant value
* @n: number of bytes to fill
* Return: memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
