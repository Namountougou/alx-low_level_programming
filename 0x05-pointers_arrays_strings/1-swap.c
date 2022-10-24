#include "main.h"

/**
 * swap_int - swap the values
 * @a: var int
 * @b: var int
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
