#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints one char out of two of a string
 * @str: Hold string value
 *
 * Return: Nithing
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
