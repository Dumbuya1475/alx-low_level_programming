#include "main.h"

/**
 * _printf - clone the printf function.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	match arr[] = {
		{"%s", s_printf_string}, {"%c", c_printf_char},
		{"%%", _printf_37},
		{"%i", i_printf_int}, {"%d", d_printf_dec}, {"%r", r_printf_reverse},
		{"%R", R_printf_rot13}, {"%b", b_printf_bin}, {"%u", u_printf_unsignint},
		{"%o", o_printf_oct}, {"%x", x_printf_hex}, {"%X", _X_printf_HEX},
		{"%S", S_printf_exclu_string}, {"%p", p_printf_pointer}
	};

	va_list args;
	int i = 0;
	int j;
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (arr[j].id[0] == format[i] && arr[j].id[1] == format[i + 1])
			{
				len += arr[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
