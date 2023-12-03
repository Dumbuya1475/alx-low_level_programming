#include "main.h"

/**
 * R_printf_rot13 - convert to rot13
 * @val: argument
 * Return count
*/
int R_printf_rot13(va_list val)
{
    int i, j, count = 0;
    int k = 0;
    char *s = va_arg(val, char*);
    char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

    if (s == NULL)
    {
        s = "(null)";
    }
    for (i = 0; s[i]; i++)
    {
        k = 0;
        for (j = 0; a[j] && !k; j++)
        {
            if (s[i] == a[j])
            {
                _putchar(b[j]);
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