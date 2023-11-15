#include "main.h"

/**
 * _pow_recursion - the power of a number
 * 
 * @x: number
 * @y: poewer
 * 
 * Return: the result
*/
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1)
    }
    else if (y == 0)
    {
        return (1);
    }
    return (x * _pow_recursion(x, y - 1));
}