#include <iostream>
#include "rational.h"

int main()
{

    int n;

    std::cout << "¬ведите размер массива: ";
    std::cin >> n;

    rational* A = new rational;


    for (int i = 0; i < n; i++)
    {
        int _a, _b;

        std::cout << "\n¬ведите числитель и знаменатель дроби через пробел:\n";
        std::cin >> _a >> _b;

        A[i].set(_a, _b);
    }

    std::cout << "¬веденные дроби:'\n";

    for (int i = 0; i < n; i++)
    {
        A[i].show();
        std::cout << '\n';
    }

    delete[] A;
}