#include "main.h"

/**
 *  void _print_rev_recursion - print string in reverse
 * 
 * @s: the string to be reverse
 * 
 * Return: void
*/
 void _print_rev_recursion(char *s)
 {
    if (*s != '\n')
    {
        _print_rev_recursion(s + 1);
        _fputchar(*s);
    }
 }