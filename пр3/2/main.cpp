#include <iostream>
#include "rational.h"

int main()
{

    int n;

    std::cout << "������� ������ �������: ";
    std::cin >> n;

    rational* A = new rational;


    for (int i = 0; i < n; i++)
    {
        int _a, _b;

        std::cout << "\n������� ��������� � ����������� ����� ����� ������:\n";
        std::cin >> _a >> _b;

        A[i].set(_a, _b);
    }

    std::cout << "��������� �����:'\n";

    for (int i = 0; i < n; i++)
    {
        A[i].show();
        std::cout << '\n';
    }

    delete[] A;
}