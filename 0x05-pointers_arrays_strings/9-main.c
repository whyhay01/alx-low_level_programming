#include <stdio.h>
#include "main.h"

/**
 * main - check codes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then write the code\n");

	printf("%s\n", s1);
	printf("%s\n", ptr);
	return (0);
}
