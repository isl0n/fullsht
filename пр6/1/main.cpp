#include "cone.h"
#include <iostream>


int main()
{
  std::cout << "Создание конуса с центром в начале координат\n";
  std::cout << "Введите радиус основания и высоту конуса:\n";
  int r, h;
  std::cin >> r >> h;

  Cone cone1(r, h);


  std::cout << "\nСоздание произвольного конуса\n";

  std::cout << "Введите координаты центра основания конуса:\n";
  int x, y, z;
  std::cin >> x >> y >> z;

  std::cout << "Введите радиус основания и высоту конуса:\n";
  std::cin >> r >> h;

  Cone cone2(x, y, z, r, h);


  std::cout << "\nДля первого конуса:\n";
  std::cout << "Площадь поверхности: " << cone1.Area() << '\n';
  std::cout << "Объем конуса: " << cone1.Volume() << '\n';

  std::cout << "\nДля второго конуса:\n";
  std::cout << "Площадь поверхности: " << cone2.Area() << '\n';
  std::cout << "Объем конуса: " << cone2.Volume() << '\n';


  Cone* cone3 = new Cone();

  std::cout << "\nСоздание произвольного динамического конуса\n";

  std::cout << "Введите координаты центра основания конуса:\n";
  x, y, z;
  std::cin >> x >> y >> z;

  std::cout << "Введите радиус основания и высоту конуса:\n";
  std::cin >> r >> h;

  cone3->Set(x, y, z, r, h);

  std::cout << "\nДинамический конус:";
  cone3->Print();


  delete cone3;


  int n = 3;
  Cone* A = new Cone[n];


   for (int i = 0; i < n; i++)
    {
        A[i] = Cone(1, 1, 1, 1, 1);
    }

    std::cout << "\nМассив из трех одинаковых конусов:";

    for (int i = 0; i < n; i++)
    {
        std::cout << '\n';
        A[i].Print();
    }

    delete[] A;
}