#include "main.h"

/**
 * _printf_HEX_extra - Convert to hex form
 * @val: Value to convert
 * Return: count
*/
int _printf_HEX_extra(unsigned long int num)
{
    long int i, count = 0;
    long int *array;
    unsigned long int tem_var = num;

    while (num / 16 != 0)
    {
        num = num / 16;
        count++;
    }
    count++;
    array = malloc(sizeof(long int) * count);
    if (array == NULL)
    {
        return (count);
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
