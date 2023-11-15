#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
// void _puts_recursion(char *s);


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
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}

