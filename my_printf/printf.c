#include "main.h"

/**
 * _printf - Print to stout formatting text
 *
 * @format: Format specifier
 * Return: number of byttes
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;
	va_start(args, format);
	
	for (i = 0; format[i] != '\0'; i++)

