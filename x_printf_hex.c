#include "main.h"

/**
 * x_printf_hex - Convert to hex form
 * @val: Value to convert
 * Return: count
 */
int x_printf_hex(va_list val)
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

    for (i = 0; i < count; i++)
    {
        array[i] = tem_var % 16;
        tem_var = tem_var / 16;
    }
	for (i = count - 1; i >= 0; i--)
    {
        if (array[i] > 9)
        {
            array[i] = array[i] + 39;
        }
        _putchar(array[i] + '0');
    }
    free(array);
    return (count);
}
