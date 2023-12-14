#include "main.h"

/**
 * binary_to_uint - convert a bin num to unsigned int
 * @b: pointer to a string
 * Return: unsigned int 
*/
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
	{
		return (0);
	}
	for (a = 0; b[a] != '0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
	}
	for (a = 0; b[a] != '0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
		{
			num += 1;
		}
	}
	return (num);
}