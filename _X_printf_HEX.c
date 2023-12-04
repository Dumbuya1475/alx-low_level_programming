#include "main.h"

/**
 * _X_printf_HEX - Convert to hex form
 * @val: Value to convert
 * Return: count
*/
int _X_printf_HEX(va_list val)
{
	int count = 0;
	int i;
	int *array;
	unsigned int tem_var;
	unsigned int value = va_arg(val, unsigned int);

	tem_var = value;

	while (tem_var / 16 != 0)
	{
		tem_var = tem_var / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	tem_var = value;

	for (i = 0; i < count; i++)
	{
		array[i] = tem_var % 16;
		tem_var = tem_var / 16;
	}
	for (i = count - 1; i >= 0; i--)
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
