#include "main.h"

/**
 * swap_int-swaps the values of two intergers
 * @a:first argument to be swapped
 * @b:second argument to be swapped
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
