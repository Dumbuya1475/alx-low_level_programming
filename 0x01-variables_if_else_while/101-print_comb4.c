#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - prints all possible different combinations of three digits
*Return: Always 0
*/
int main(void)
{
	int num, m, l;

	for (num = 48; num < 58; num++)
	{
		for (m = 49; m <= 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > num)
				{
					putchar(num);
					putchar(m);
					putchar(l);
					if (num != 55 || m != 56)
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
