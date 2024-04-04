#include "main.h"

/**
 * o_printf_oct - convert to octal value
 * @val: argument
 * Return: count
*/
int o_printf_oct(va_list val)
{
    int i;
	int count = 0;
    int *array;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int tem_var = num;
    
    while (num / 8 != 0)
    {
		num = num / 8;
		count++;
    }
    count++;
    array = malloc(sizeof(int) * count);

    for (i = 0; i < count; i++)
    {
		array[i] = tem_var % 8;
		tem_var = tem_var / 8;
    }
    for (i = count - 1; i >= 0; i--)
    {
		_putchar(array[i] + '0');
    }
    free(array);
    return (count);
}
