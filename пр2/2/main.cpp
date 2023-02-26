// ������ � ������� ����������

#include <iostream>
#include "Circle.h"
#include "Triangle.h"



int main()
{
    // �������� �����������
    float r1, x1, y1;

    std::cout << "������ ����������\n";
    std::cout << "������� ������, ���������� ������:\n";

    std::cin >> r1 >> x1 >> y1;
    Circle circle1(r1, x1, y1);

    float r2, x2, y2;

    std::cout << "\n������ ����������\n";
    std::cout << "������� ������, ���������� ������:\n";

    std::cin >> r2 >> x2 >> y2;
    Circle circle2(r2, x2, y2);

    float r3, x3, y3;

    std::cout << "\n������ ����������\n";
    std::cout << "������� ������, ���������� ������:\n";

    std::cin >> r3 >> x3 >> y3;
    Circle circle3(r3, x3, y3);


    // �������� ������������
    std::cout << "������� ������� ������������ ����� ������";

    double a, b, c;

    std::cin >> a >> b >> c;
    Triangle A(a, b, c);

    while (!A.exst_tr())
    {
        std::cout << "����������� �� ����������, ������� ����� �������� ������:\n";
        std::cin >> a >> b >> c;
        A.set(a, b, c);
    }



    // ������ ����������
    std::cout << "\n\n��� ������ ����������:\n\n";

    std::cout << "�������: " << circle1.area() << '\n';
    std::cout << "����������� ����� �������: " << circle1.triangle_in(a, b, c) << '\n';
    std::cout << "����������� ����� �������: " << circle1.triangle_around(a, b, c) << '\n';
    std::cout << "���������� ������������:";
    std::cout << "\n�� ������: " << circle1.check_circle(r2, x2, y2);
    std::cout << "\n� �������: " << circle1.check_circle(r3, x3, y3);




    // ������ ����������
    std::cout << "\n\n��� ������ ����������:\n\n";

    std::cout << "�������: " << circle2.area() << '\n';
    std::cout << "����������� ����� �������: " << circle2.triangle_in(a, b, c) << '\n';
    std::cout << "����������� ����� �������: " << circle2.triangle_around(a, b, c) << '\n';
    std::cout << "���������� ������������:";
    std::cout << "\n� ������: " << circle2.check_circle(r1, x1, y1);
    std::cout << "\n� �������: " << circle2.check_circle(r3, x3, y3);




    // ������ ����������
    std::cout << "\n\n��� ������� ����������:\n\n";

    std::cout << "�������: " << circle3.area() << '\n';
    std::cout << "����������� ����� �������: " << circle3.triangle_in(a, b, c) << '\n';
    std::cout << "����������� ����� �������: " << circle3.triangle_around(a, b, c) << '\n';
    std::cout << "���������� ������������:";
    std::cout << "\n� ������: " << circle3.check_circle(r1, x1, y1);
    std::cout << "\n�� ������: " << circle3.check_circle(r2, x2, y2);
}