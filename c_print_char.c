#include "main.h"

/**
 * c_printf_char - print a character
 * @var: argument
 * Return: 1
*/
int c_printf_char(va_list val)
{
    char string;

    string = va_arg(val, int);
    _putchar(string);
    return (1);
}
