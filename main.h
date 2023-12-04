#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct format
{
        char *id;
        int (*f)();
} match;

/*Tax 0*/
int c_printf_char(va_list val);
int _putchar(char c);
int _strlen(char *str);
int _strlenc(const char *str);
int _printf_37(void);
int s_printf_string(va_list val);

/*Tax 1*/
int d_printf_dec(va_list args);
int i_printf_int(va_list args);

/*Tax 2*/
int b_printf_bin(va_list val);

/*Tax 3*/
int u_printf_unsignint(va_list args);
int o_printf_oct(va_list val);
int x_printf_hex(va_list val);
int X_printf_HEX(va_list val);

/*Tax 4*/
/*Tax 5*/
int s_printf_exclu_string(va_list val);
int printf_HEX_extra(unsigned int num);
int p_printf_pointer(va_list val);
int _printf_HEX_extra(unsigned long int num);
int r_printf_reverse(va_list val);
int R_printf_rot13(va_list val);
int _printf(const char *format, ...);

#endif
