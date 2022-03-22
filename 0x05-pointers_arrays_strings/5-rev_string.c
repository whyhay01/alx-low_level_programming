#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string char
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j, m;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (m = 0; m < i / 2; m++)
	{
		tmp = s[m];
		s[m] = s[j];
		s[j--] = tmp;
	}
}
