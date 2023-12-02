#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int c_printf_char(va_list val);
int printf_string(va_list val);
int _strlenc(const char *str);
int _print_17(void);
int i_printf_int(va_list args);
int d_printf_int(va_list args);
int b_printf_bin(va_list val);
int u_printf_unsignint(va_list args);
int o_printf_oct(va_list val);
int x_printf_hex(va_list val);
int X_printf_HEX(va_list val);
int printf_HEX_extra(unsigned int num);
int s_printf_elclu_string(va_list val);

#endif
