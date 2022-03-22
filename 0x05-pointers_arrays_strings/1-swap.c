#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swap the the value of two int value
 * @a: first int value
 * @b: Second int value
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
