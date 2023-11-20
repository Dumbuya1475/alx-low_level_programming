#include "main.h"
<<<<<<< HEAD

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
=======
// #include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/

char *_strcat(char *dest, char *src);
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

char *_strcat(char *dest, char *src)
{    
    int i, j;

    i = 0;
    j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    
    dest[j + i] = '\0';

    return (dest);
}
  
>>>>>>> b28bd8482e0a6b0556d1d95d5a8b34b02e63e7c8
