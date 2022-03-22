#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints string values in reverse
 * @s: string pointer
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	int size;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	size = i;

	for (j = size - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
