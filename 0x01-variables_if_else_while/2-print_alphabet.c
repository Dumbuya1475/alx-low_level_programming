#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*  betty style doc for function main goes there */
/**
 * main - print alphabet in lowercase
 * follow by new line
 * return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
