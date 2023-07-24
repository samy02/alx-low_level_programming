#include "main.h"

/**
 * swap_int - changes the values of two integers
 * @a: first value pointer
 * @b: second value pointer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
