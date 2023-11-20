#include "main.h"

/**
 * create_array - create array
 * @size: size of array
 * @c character to store in an array
 * Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
    int i;
    char *arr;

    if (size == 0)
    {
        return (NULL);
    }
    arr = malloc(sizeof(char) * size);

    if (arr == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < 0; i++)
    {
        arr[i] = c;
    }
    return (arr);
}
