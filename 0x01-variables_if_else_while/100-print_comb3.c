#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int z = 0, t;

	while (z <= 9)
	{
		t = 0;
		while (t <= 9)
		{
			if (z != t && z < t)
			{
				putchar(z + 48);
				putchar(t + 48);

				if (z + t != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			t++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}
