#include "main.h"

/**
 * R_printf_rot13 - convert to rot13
 * @val: argument
 * Return count
*/
int R_printf_rot13(va_list val)
{
	int i;
	int j;
	int count = 0;
	int k = 0;
	char *s = va_arg(val, char*);
	char alfa[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bet[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)
	{
		k = 0;
	for (j = 0; alfa[j] && !k; j++)
	{
		if (s[i] == alfa[j])
		{
			_putchar(bet[j]);
			count++;
			k = 1;
		}
	}
	if (!k)
	{
		_putchar(s[i]);
		count++;
	}
	}
	return (count);
}
