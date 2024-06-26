#include "main.h"

/**
 * printf_HEX - Convert to hex form
 * @val: Value to convert
 * Return: counter
*/
int printf_HEX_extra(unsigned int num)
{
	int i;
	int counter = 0;
	int *array;
	unsigned int tem_var = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);

	for (i = 0; i < counter; i++)
	{
		array[i] = tem_var % 16;
		tem_var = tem_var / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 9)
		{
			array[i] = array[i] + 7;
		}
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
