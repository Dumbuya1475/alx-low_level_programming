#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - print alphabet in lowercase except e and q
*follow by a new line
*Return: Always 0
*/
int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
