#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - This function rest the value of an int variable to 98 through its memory address
 *@n: pointer the integer we want to set to 98
 *
 * Return: Nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}
