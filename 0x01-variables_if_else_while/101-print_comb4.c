#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, o;

	for (n = 48; n <= 57; n++)
	{

		for (m = 49; m <= 57; m++)
		{

			for (o = 50; o <= 57; o++)
			{

				if (n != m && m > n && o > m)
				{
					putchar(n);
					putchar(m);
					putchar(o);

					if (n != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
