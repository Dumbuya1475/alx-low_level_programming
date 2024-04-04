#include "main.h"

/**
 * r_printf_reverse - print a string in reverse
 * @val: arugment
 * Return: the string
*/
int r_printf_reverse(va_list val)
{
	char *s = va_arg(val, char*);
	int i;
	int j = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (j);
}
