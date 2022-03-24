#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{

		for (m = 49; m <= 57; m++)
		{

			if ( n != m)
			{
			putchar(n);
			putchar(m);
			if (m != 57 &&  n != 57)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
