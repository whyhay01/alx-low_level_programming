#include <stdio.h>
#include "main.h"

/**
 * _strlen - Function print length of a string
 * @s: parameter
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
