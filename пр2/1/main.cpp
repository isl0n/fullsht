// ������ � ������� ������������


#include "Triangle.h"
#include <iostream>

int main()
{
    Triangle A[3];



    for (int i = 0; i < 3; i++)
    {
        std::cout << "������� ������� ������������ �" << i + 1 << " ����� ������:\n";

        double a, b, c;
        std::cin >> a >> b >> c;

        A[i].set(a, b, c);

        while (!A[i].exst_tr())
        {
            std::cout << "����������� �� ����������, ������� ����� �������� ������:\n";
            std::cin >> a >> b >> c;
            A[i].set(a, b, c);
        }
    }



    for (int i = 0; i < 3; i++)
    {
        std::cout << "����������� �" << i + 1 << '\n';

        A[i].show();
        std::cout << '\n';

        std::cout << "��������: " << A[i].perimeter() << '\n';
        std::cout << "�������: " << A[i].area() << "\n\n";
    }
    Setlocale (LC_ALL, "Russian")
}