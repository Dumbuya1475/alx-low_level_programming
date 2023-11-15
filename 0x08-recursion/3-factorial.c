#include "main.h"

/**
 * factirial - get the factorial of a number
 * 
 * @n: factor to factorial
 * 
 * Return: factorial of n
*/
int factorial(int n)
{
    if (n == 0)
    {
        return (1);
    }
    else if (n < 0)
    {
        return (-1);
    }
    return (n * factorial(n - 1));
}