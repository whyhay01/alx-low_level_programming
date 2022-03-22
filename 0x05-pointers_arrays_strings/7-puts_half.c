#include <stdio.h>
#include "main.h"

/**
 * puts_half - print the second half of the string
 * followed by a newline
 * @str: String value
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len, i, j;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
