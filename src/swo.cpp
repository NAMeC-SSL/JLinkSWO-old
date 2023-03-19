#include "swo.h"

int SWO::_putc(int c)
{
    ITM_SendChar(c);
    return c;
}

int SWO::_getc()
{
    return -1;
}

void SWO::print(const char *s)
{
    printf("%s", s);
}

void SWO::print(char c)
{
    printf("%c", c);
}

void SWO::print(int n)
{
    printf("%d", n);
}

void SWO::print(bool value)
{
    if (value)
    {
        print("True");
    }
    else
    {
        print("False");
    }
}

void SWO::print(double number, int digits)
{
    if (number < 0.0)
    {
        print('-');
        number = -number;
    }

    int int_part = (int)number;
    double remainder = number - int_part;

    print(int_part);

    if (digits > 0)
    {
        print('.');
    }

    while (digits-- > 0)
    {
        remainder *= 10.0;
        int to_print = (int)remainder;
        print(to_print);
        remainder -= to_print;
    }
}

void SWO::println(const char *s)
{
    printf("%s\n", s);
}

void SWO::println(char c)
{
    printf("%c\n", c);
}

void SWO::println(int n)
{
    printf("%d\n", n);
}

void SWO::println(bool value)
{
    if (value)
    {
        println("True");
    }
    else
    {
        println("False");
    }
}

void SWO::println(double number, int digits)
{
    if (number < 0.0)
    {
        print('-');
        number = -number;
    }

    int int_part = (int)number;
    double remainder = number - int_part;

    print(int_part);

    if (digits > 0)
    {
        print('.');
    }

    while (digits-- > 0)
    {
        remainder *= 10.0;
        int to_print = (int)remainder;
        print(to_print);
        remainder -= to_print;
    }

    print("\n");
}
