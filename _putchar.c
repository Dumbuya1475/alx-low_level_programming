#include "main.h"

/**
 * _putchar - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _putchar(char c)
{
	return (write(1, &c, 2));
}
