#include "CutCone.h"
#include <iostream>
#include <math.h>

CutCone::CutCone()
{
    x = y = z = radius = radius2 = height = 1;
}

CutCone::CutCone(double _radius, double _radius2, double _height)
{
    x = y = z = 0;

    radius = _radius;
    radius2 = _radius2;
    height = _height;
}

CutCone::CutCone(double _x, double _y, double _z, double _radius, double _radius2, double _height)
{
    x = _x;
    y = _y;
    z = _z;

    radius = _radius;
    radius2 = _radius2;
    height = _height;
}

void CutCone::Set(double _x, double _y, double _z, double _radius, double _radius2, double _height)
{
    x = _x;
    y = _y;
    z = _z;

    radius = _radius;
    radius2 = _radius2;
    height = _height;
}

void CutCone::Print()
{
    std::cout << "\n���������� ������ ���������: " << x << ", " << y << ", " << z << '\n';
    std::cout << "������ ���������: " << radius << '\n';
    std::cout << "������ �������� ���������: " << radius2 << '\n';
    std::cout << "������ ������: " << height << '\n';
}

double CutCone::Area()
{
    double L = sqrt(height * height + pow(radius - radius2, 2));

    return M_PI * (radius2 + radius) * L + M_PI * radius2 * radius2 + M_PI * radius * radius;
}

double CutCone::Volume()
{
    return 1.0 / 3.0 * M_PI * height * (radius2 * radius2 + radius2 * radius + radius * radius);
}

std::ostream& operator<<(std::ostream& stream, CutCone obj)
{
    stream << "\n���������� ������ ���������: " << obj.x << ", " << obj.y << ", " << obj.z << '\n';
    stream << "������ ���������: " << obj.radius << '\n';
    stream << "������ �������� ���������: " << obj.radius2 << '\n';
    stream << "������ ������: " << obj.height << '\n';
    stream << "������� ����������� ������: " << obj.Area() << '\n';
    stream << "����� ������: " << obj.Volume() << '\n';

    return stream;
}

std::istream& operator>>(std::istream& stream, CutCone& obj)
{
    std::cout << "������� ���������� ������ ��������� ������:\n";
    stream >> obj.x >> obj.y >> obj.z;

    std::cout << "������� ������ ������� � �������� ���������\n";
    stream >> obj.radius >> obj.radius2;

    std::cout << "������� ������\n";
    stream >> obj.height;

    return stream;
}

bool CutCone::operator<(CutCone cone)
{
    return (this->Volume() < cone.Volume() ? true : false);
}
bool CutCone::operator>(CutCone cone)
{
    return (this->Volume() > cone.Volume() ? true : false);
}
bool CutCone::operator<=(CutCone cone)
{
    return (this->Volume() <= cone.Volume() ? true : false);
}
bool CutCone::operator>=(CutCone cone)
{
    return (this->Volume() >= cone.Volume() ? true : false);
}
bool CutCone::operator==(CutCone cone)
{
    return (this->Volume() == cone.Volume() ? true : false);
}