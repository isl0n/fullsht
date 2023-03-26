#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"
#include <iostream>
#include <string>


int main()
{
    // Создание Тихого океана
    Ocean ocean1("Pacific", 11022, 178684000);
    std::cout << ocean1 << '\n';

    // Создание Берингово моря
    Sea sea1("Bering", 4420, 2315000, &ocean1);
    std::cout << sea1 << '\n';

    // Создание Карагинского залива
    Bay bay1("Karaginsky", 60, 35000, &sea1);
    std::cout << bay1 << '\n';

    // Создание внутреннего моря
    Sea sea2("Azovskoe", 14, 39000);
    std::cout << sea2 << '\n';
}