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

			if (n != m && m > n)
			{
			putchar(n);
			putchar(m);

			if (n != 56)
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
