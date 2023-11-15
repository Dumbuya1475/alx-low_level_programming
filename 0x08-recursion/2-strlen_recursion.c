#include "main.h"

/**
 * _strlen_recursion - print the string length
 * 
 * @s: string
 * 
 * Return: length of string as an int
*/
int _strlen_recursion(char *S)
{
    if (*s != '0')
    {
        return (1 + _strlen_recursion(s + 1));
    }
    return (0);
}