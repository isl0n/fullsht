#include "CutCone.h"
#include <iostream>


int main()
{
    int n;
    std::cout << "������� ��������� ������� ������?\n";
    std::cin >> n;

    CutCone* A = new CutCone[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "\n������� ��������� ����� " << i + 1 << '\n';
        std::cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << A[i];
    }

    if (n > 1)
    {
        int a, b;
        std::cout << "����� ������ ��������? (�� �������� ������� �� 0)\n";
        std::cin >> a >> b;

        std::cout << "1 < 2 \t-\t " << (A[a] < A[b]) << '\n';
        std::cout << "1 > 2 \t-\t " << (A[a] > A[b]) << '\n';
        std::cout << "1 <= 2 \t-\t " << (A[a] <= A[b]) << '\n';
        std::cout << "1 >= 2 \t-\t " << (A[a] >= A[b]) << '\n';
        std::cout << "1 == 2 \t-\t " << (A[a] == A[b]) << '\n';
    }

    delete[] A;

    Cone cone1;

    std::cout << "\n������� �����\n";

    int x, y, z;
    std::cout << "������� ���������� ������ ���������:\n";
    std::cin >> x >> y >> z;

    int r;
    std::cout << "������� ������ �������� ������:\n";
    std::cin >> r;

    int h;
    std::cout << "������� ������ ������:\n";
    std::cin >> h;

    cone1.Set(x, y, z, r, h);
    std::cout << "�����:\n";
    cone1.Print();

    std::cout << "\n��� ��������� ������, ����������� �� ������ ������:\n";

    CutCone cCone1(x, y, z, r, 1, h);
    CutCone cCone2(x, y, z, r, 2, h);
    CutCone cCone3(x, y, z, r, 3, h);

    std::cout << cCone1 << cCone2 << cCone3;
}