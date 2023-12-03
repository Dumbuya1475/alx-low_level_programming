#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
*/
int _printf(const char *format, ...)
{
    va_list args;
    int i, j, len = 0;

    match m[] = {
        {"%c", c_printf_char}, {"%s", s_printf_string}, {"%%", _print_37}, {"%d", d_printf_int}, {"%i", d_printf_int}, {"%x", x_printf_hex}, {"%r", r_printf_reverse},
        {"%R", R_printf_rot13}, {"%b", b_printf_bin}, {"%u", u_printf_unsignint}, {"%X", X_printf_HEX}, {"%o", o_printf_oct}, {"%S", s_printf_exclu_string}, {"%x", x_printf_hex}, {"%p", p_printf_pointer},
        {NULL, NULL}
    };

    va_start(args, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%' && format[i + 1] == '\0')
            return (-1);

        if (format[i] == '%')
        {
            for (j = 0; m[j].id != NULL; j++)
            {
                if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
                {
                    len += m[j].f(args);
                    i++;
                    break;
                }
            }
            if (m[j].id == NULL)
            {
                _putchar(format[i]);
                len++;
            }
        }
        else
        {
            _putchar(format[i]);
            len++;
        }
    }

    va_end(args);
    return (len);
}
