#include "main.h"

/**
 * c_printf_char - print a character
 * @var: argument
 * Return: 1
*/
int c_printf_char(va_list val)
{
    char str;

    str = va_arg(val, int);
    _putchar(str);
    return (1);
}
