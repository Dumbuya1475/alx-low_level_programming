#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++; // Move past '%'
            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's': {
                    const char *str = va_arg(args, const char *);
                    while (*str != '\0') {
                        count += putchar(*str);
                        str++;
                    }
                    break;
                }
                case '%':
                    count += putchar('%');
                    break;
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    count += printf("%d", num);
                    break;
                }
                case 'b': {
                    unsigned int binaryNum = va_arg(args, unsigned int);
                    count += printBinary(binaryNum);
                    break;
                }
                default:
                    // Unsupported specifier, just print as is
                    count += putchar('%');
                    count += putchar(*format);
            }
        } else {
            count += putchar(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}

// Function to print an unsigned integer in binary format
int printBinary(unsigned int num) {
    int count = 0;
    if (num == 0) {
        count += putchar('0');
    } else {
        count += printBinaryHelper(num);
    }
    return count;
}

int printBinaryHelper(unsigned int num) {
    int count = 0;
    if (num > 0) {
        count += printBinaryHelper(num / 2);
        count += putchar((num % 2) + '0');
    }
    return count;
}

int main(void) {
    _printf("%b\n", 98);
    return 0;
}

