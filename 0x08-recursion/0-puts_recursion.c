#include "main.h"

/**
<<<<<<< HEAD
 *  * _puts_recursion - function name
 *   * @s: parameter of the function
 *    * Return: nothing
 *    */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
=======
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
>>>>>>> 54b49859fa7c99a23157d89f115593c9d7691808
}
