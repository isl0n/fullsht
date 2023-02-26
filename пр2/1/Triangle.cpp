// ���������� ������ Triangle

#include "Triangle.h"
#include <iostream>
#include <cmath>






// �������� �������� ������
void Triangle::set(double _a, double _b, double _c)
{
    a = _a;
    b = _b;
    c = _c;
}



// ������� �������� ������
void Triangle::show()
{
    std::cout << "a:" << a << "; b:" << b << "; c:" << c;
}




// ���������� �� �����������
bool Triangle::exst_tr()
{
    return (a + b > c && a + c > b && b + c > a);
}



// ��������
double Triangle::perimeter()
{
    return(a + b + c);
}



// �������
double Triangle::area()
{
    double p = this->perimeter() / 2;

    return(sqrt(p * (p - a) * (p - b) * (p - c)));
}