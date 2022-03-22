#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints string values
 * @s: string pointer
 *
 * Return: Nothing
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
