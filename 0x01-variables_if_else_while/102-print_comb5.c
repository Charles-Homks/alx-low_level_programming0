#include <stdio.h>

/**
 * main - Program prints all possible different combinations of
 *	two two-digits numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;
	int y, z;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
				if (a != y || b != z)
				{
				if (y > b || z > a)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(y);
					putchar(z);
					if (a != '9' || b != '8' || y != '9' || z != '9')
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
