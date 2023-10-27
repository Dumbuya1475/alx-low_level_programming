#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - print all numbers of base 16 in lower
*follow by a new line
*return: Always 0
*/
int main(void)
{
	int num;
	char letter;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
