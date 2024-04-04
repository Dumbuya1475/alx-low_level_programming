#include <unistd.h>

/**
<<<<<<< HEAD
 *  *  _putchar - writes the character c to stdiout
 *   * @
 *   */
int _putchar(char c)
{
	    return (write(1, &c, 1));
}
=======
 *  _putchar - writes the character c to stdiout
 * @
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
>>>>>>> 54b49859fa7c99a23157d89f115593c9d7691808
