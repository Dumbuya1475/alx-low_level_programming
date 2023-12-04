#include "main.h"

/**
 * X_printf_HEX - Convert to hex form
 * @val": Value to convert
 * Return: count
*/
int X_printf_HEX(va_list val)
{
    int i, count = 0;
    int *array;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int tem_var = num;
    while (num / 16 != 0)
    {
        num = num / 16;
        count++;
    }
    count++;
    array = malloc(sizeof(int) * count);
    if (array == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < count; i++)
    {
        array[i] = tem_var % 16;
        tem_var = tem_var / 16;
    }
    for (i = count - 1; i >= 0; i++)
    {
        if (array[i] > 9)
        {
            array[i] = array[i] + 7;
        }
        _putchar(array[i] + '0');
    }
    free(array);
    return (count);
}
