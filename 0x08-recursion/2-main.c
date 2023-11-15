#include "main.h"
#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int _strlen_recursion(char *S);
int main(void)
{
    int n;
    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}

int _strlen_recursion(char *s)
{
    if (*s != '\0')
    {
        return (1 + _strlen_recursion(s + 1));
    }
    return (0);
}