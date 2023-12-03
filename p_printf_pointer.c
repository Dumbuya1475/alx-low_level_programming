#include "main.h"

/**
 * p_printf_pointer - Custom printf function for pointers
 * @val: Pointer argument
 * Return: Number of characters printed (excluding null byte)
*/
int p_printf_pointer(va_list val)
{
    unsigned long int a;
    char *str;
    int len = 0;

    a = (uintptr_t)va_arg(val, void *);

    if (a == 0)
    {
        len += _printf("(nil)");
        return (len);
    }

    str = "0x";
    len += _printf("%s", str);
    len += _printf_HEX_extra(a);

    return (len);
}
