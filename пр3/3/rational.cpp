#include <iostream>
#include "rational.h"

int nod(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        }

        else {
            b -= a;
        }
    }

    return a;
}

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
        int ratNOD = nod(a, b);

        if (ratNOD != 1)
        {
            a /= ratNOD;
            b /= ratNOD;
        }

        while (a > b && b != 1)
        {
            a %= b;
        }

        ratNOD = nod(b, a);

        if (ratNOD != 1)
        {
            b /= ratNOD;
            a /= ratNOD;
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
        int ratNOD = nod(a, b);

        if (ratNOD != 1)
        {
            a /= ratNOD;
            b /= ratNOD;
        }

        while (a > b && b != 1)
        {
            a %= b;
        }

        ratNOD = nod(b, a);

        if (ratNOD != 1)
        {
            b /= ratNOD;
            a /= ratNOD;
        }
    }
}

void rational::show()
{
    if (canExist) std::cout << a << '/' << b;

    else std::cout << "Не существует (знаменатель == 0)";
}

int rational::get_a()
{
    return a;
}
int rational::get_b()
{
    return b;
}


rational rational::operator+ (rational B)
{
    rational sum(a * B.get_b() + B.get_a() * b, b * B.get_b());
    return sum;
}

rational operator - (rational A, rational B)
{
    rational diff(A.a * B.b - B.a * A.b, A.b * B.b);
    return diff;
}

rational rational::operator++ (int)
{
    a++;
    return *this;
}

rational rational::operator= (rational A)
{
    a = A.get_a();
    b = A.get_b();
    return *this;
}

bool operator== (rational A, rational B)
{
    return(A.get_a() == B.get_a() && A.get_b() == B.get_b());
}

rational operator> (rational A, rational B)
{
    bool A_isBigger = A.get_a() * B.get_b() > B.get_a() * A.get_b();

    return (A_isBigger ? A : B);
}