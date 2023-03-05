#include <iostream>
#include "eq2.h"


int main()
{
    double _a, _b, _c;

    std::cout << "�������� �������� ������������� ������� ��������� ����� ������:\n";
    std::cin >> _a >> _b >> _c;

    eq2 quadratic1(_a, _b, _c);


    std::cout << "�������� �������� ������������� ������� ��������� ����� ������:\n";
    std::cin >> _a >> _b >> _c;

    eq2 quadratic2(_a, _b, _c);


    double x1;

    std::cout << "\n������� x1 ��� �����������\n";
    std::cin >> x1;



    double X = quadratic1.find_X();

    std::cout << "���������� ������ ������� ���������: " << X << '\n';


    std::cout << "�������� ������� ���������� ��� X = x1: " << quadratic1.find_Y(x1);
    std::cout << "\n\n";



    X = quadratic2.find_X();

    std::cout << "���������� ������ ������� ���������: " << X << '\n';


    std::cout << "�������� ������� ���������� ��� X = x1: " << quadratic2.find_Y(x1);
    std::cout << "\n\n";

    eq2 quadratic3 = quadratic1 + quadratic2;

    std::cout << "��������� �������� �����������:\n";
    quadratic3.print();
}