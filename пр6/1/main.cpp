#include "cone.h"
#include <iostream>


int main()
{
  std::cout << "�������� ������ � ������� � ������ ���������\n";
  std::cout << "������� ������ ��������� � ������ ������:\n";
  int r, h;
  std::cin >> r >> h;

  Cone cone1(r, h);


  std::cout << "\n�������� ������������� ������\n";

  std::cout << "������� ���������� ������ ��������� ������:\n";
  int x, y, z;
  std::cin >> x >> y >> z;

  std::cout << "������� ������ ��������� � ������ ������:\n";
  std::cin >> r >> h;

  Cone cone2(x, y, z, r, h);


  std::cout << "\n��� ������� ������:\n";
  std::cout << "������� �����������: " << cone1.Area() << '\n';
  std::cout << "����� ������: " << cone1.Volume() << '\n';

  std::cout << "\n��� ������� ������:\n";
  std::cout << "������� �����������: " << cone2.Area() << '\n';
  std::cout << "����� ������: " << cone2.Volume() << '\n';


  Cone* cone3 = new Cone();

  std::cout << "\n�������� ������������� ������������� ������\n";

  std::cout << "������� ���������� ������ ��������� ������:\n";
  x, y, z;
  std::cin >> x >> y >> z;

  std::cout << "������� ������ ��������� � ������ ������:\n";
  std::cin >> r >> h;

  cone3->Set(x, y, z, r, h);

  std::cout << "\n������������ �����:";
  cone3->Print();


  delete cone3;


  int n = 3;
  Cone* A = new Cone[n];


   for (int i = 0; i < n; i++)
    {
        A[i] = Cone(1, 1, 1, 1, 1);
    }

    std::cout << "\n������ �� ���� ���������� �������:";

    for (int i = 0; i < n; i++)
    {
        std::cout << '\n';
        A[i].Print();
    }

    delete[] A;
}