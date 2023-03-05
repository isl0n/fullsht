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

    int selection1, selection2;

    if (n > 1)
    {

        std::cout << "����� ����� �������? (������ ���������� � ����)\n";
        std::cin >> selection1 >> selection2;

        rational sum = A[selection1] + A[selection2];

        sum.show();

        std::cout << "\n\n����� ����� �������? (������ ���������� � ����)\n";
        std::cin >> selection1 >> selection2;

        rational diff = A[selection1] - A[selection2];

        diff.show();

        std::cout << "\n\n����� ����� ��������� �� ��������? (������ ���������� � ����)\n";
        std::cin >> selection1 >> selection2;

        bool areEqual = A[selection1] == A[selection2];

        std::cout << (areEqual ? "����� �����" : "����� �� �����");

        std::cout << "\n\n����� ����� ��������? (������ ���������� � ����)\n";
        std::cin >> selection1 >> selection2;

        rational max = A[selection1] > A[selection2];

        std::cout << "���������� �����: ";
        max.show();
    }

    std::cout << "\n\n����� ����� ����������������? (������ ���������� � ����)\n";
    std::cin >> selection1;

    A[selection1]++;
    A[selection1].show();

    std::cout << '\n';


    delete[] A;
}