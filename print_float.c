#include "main.h"

void print_float(float number)
{
        int int_part = (int)number;
        float decimal = number - int_part;
        print_int(int_part);
        _putchar('.');
        int no_of_decimals = 5;
        for (int i = 0; i < no_of_decimals; i++)
        {
                decimal *= 10;
                int digit = (int)decimal;
                _putchar(digit + '0');
                decimal -= digit;
        }
        _putchar('\n');
}
