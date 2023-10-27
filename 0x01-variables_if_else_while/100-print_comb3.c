#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - print all possible different combinatons
*Return: Always 0
*/
int main(void)
{
	int num;
	int m

	for (num = 48; num < 56; num++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > num)
			{
				putchar(num);
				putchar(m);
				if (num != 56 || m != 57)
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
