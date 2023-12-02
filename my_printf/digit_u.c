#include "main.h"

/**
 * my_printf_ - checks if a char is printable
 *
 * @c: Char to be evaluated.
 *
 * Return: 1 if c is printable, else 0
 */
int my_printf_(char c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

/**
 * hexa_append - Append ASCCI in hex code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ASCII_code: ASSCI CODE.
 * Return: Always 3
 */
int hex_append(char ascii_code, char buffer[], int i)
{
	char map_tp[] = "0123456789ABCDEF";
	/* The hex format code is always 2 digit long */
	if (ascii_code < 0)
	{
		ascii_code *= -1;
	}
	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * digit_verify - This verifies if a char is a digit
 * @c: Char to be evaluater
 "digit_u.c" 871, 1669C
