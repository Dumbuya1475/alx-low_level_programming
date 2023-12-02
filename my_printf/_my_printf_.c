#include "main.h"
#include <stdio.h>
/**
 * _my_printf_ - Print to stoud formated text
 * 
 * 
*/
int _my_printf_(const char *format, ...);
int main()
{
    _my_printf_("Hell");
    return (0);
}
int _my_printf_(const char *format, ...)
{
    unsigned int i, count = 0;

    va_list args;

    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
        }
        // if (format[i] =='%' && )
        // {
        //     /* code */
        // }
        

        count++;
        
    }

    return (count);

}