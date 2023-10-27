#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - print alphabet in lowercase except e and q
*follow by a new line
*return: Always 0
*/
int main(void)
{
	char letter = 'a';
      
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter ++;
	}
	putchar('\n');
	return (0) ;
}
