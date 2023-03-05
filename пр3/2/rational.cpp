#include <iostream>
#include "rational.h"

rational::rational()
{
    a = 0;
    b = 0;
    canExist = true;
}

rational::rational(int a1, int b1)
{
    a = a1;
    b = b1;
    canExist = true;

    if (b == 0)
    {
        a = 0;
        canExist = false;
    }

    if (a == 0)
    {
        b = 0;
    }

    if (canExist && a != 0)
    {

        if (a % b == 0)
        {
            a /= b;
            b /= b;
        }

        while (a > b && b != 1)
        {
            a %= b;
        }

        if (b % a == 0)
        {
            b /= a;
            a /= a;
        }
    }
}

void rational::set(int a1, int b1)
{
    a = a1;
    b = b1;
    canExist = true;

    if (b == 0)
    {
        a = 0;
        canExist = false;
    }

    if (a == 0)
    {
        b = 0;
    }

    if (canExist && a != 0)
    {

        if (a % b == 0)
        {
            a /= b;
            b /= b;
        }

        while (a > b && b != 1)
        {
            a %= b;
        }

        if (b % a == 0)
        {
            b /= a;
            a /= a;
        }
    }
}

void rational::show()
{
    if (canExist) std::cout << a << '/' << b;

    else std::cout << "Не существует (знаменатель == 0)";
}