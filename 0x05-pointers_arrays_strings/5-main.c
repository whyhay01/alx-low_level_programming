#include "main.h"
#include <stdio.h>

/**
 * main - chec the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);

	return (0);
}
