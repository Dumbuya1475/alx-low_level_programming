<<<<<<< HEAD
nclude "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    int r;

	        r = _pow_recursion(1, 10);
		    printf("%d\n", r);
		        r = _pow_recursion(1024, 0);
			    printf("%d\n", r);
			        r = _pow_recursion(2, 16);
				    printf("%d\n", r);
				        r = _pow_recursion(5, 2);
					    printf("%d\n", r);
					        r = _pow_recursion(5, -2);
						    printf("%d\n", r);
						        r = _pow_recursion(-5, 3);
							    printf("%d\n", r);
							        return (0);
}
=======
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
>>>>>>> 54b49859fa7c99a23157d89f115593c9d7691808
