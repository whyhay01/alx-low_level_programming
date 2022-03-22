#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to
 *
 * @dest: Pointer to the buffer in which we copy the string
 * @src: String to be copied
 *
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = o;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
