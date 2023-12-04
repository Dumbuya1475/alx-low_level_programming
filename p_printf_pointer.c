#include "main.h"

/**
 * p_printf_pointer - prints a hexadecimal number representing a pointer.
 * @val: arguments.
 * Return: counter.
 */
int p_printf_pointer(va_list val)
{
    void *ptr;
    char *s = "(nil)";
    uintptr_t a;
    int b;
    int i;

    ptr = va_arg(val, void*);
    if (ptr == NULL)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            _putchar(s[i]);
        }
        return (i);
    }

    a = (uintptr_t)ptr;
    _putchar('0');
    _putchar('x');
    b = x_printf_hex(a);
    return (b + 2);
}
