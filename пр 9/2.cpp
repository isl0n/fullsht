#include <iostream>

template<typename T>
void sort(T* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Функция для сравнения для сортировки строк в библиографическом виде
template<typename T>
bool compare(const T& a, const T& b)
{
    if (a == "" && b != "") // Если одна из строк пустая, то считаем ее меньшей
        return true;
    else if (a != "" && b == "")
        return false;
    else if (a == "" && b == "")
        return true;
    else if (a[0] == b[0]) // Если первые символы одинаковые, то рекурсивно вызываем себя для следующих символов
        return compare(a.substr(1), b.substr(1));
    else
        return a[0] < b[0];
}

// Перегрузка функции sort для сортировки строк в библиографическом виде
template<>
void sort(std::string* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                std::string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr1[] = { 5, 3, 2, 1, 4 };
    sort(arr1, 5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    double arr2[] = { 0.5, -4.2, 1.7, 3.14, -2.71 };
    sort(arr2, 5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    std::string arr3[] = { "Smith", "Jane", "Williams", "Adams", "Lee" };
    sort(arr3, 5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr3[i] << std::endl;
    }
    std::cout << std::endl;

    return 0;
}