#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Примеры использования
int main()
{
    // Обмен переменных типа int
    int a = 5, b = 10;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;

    // Обмен объектов пользовательского класса
    class MyClass
    {
    public:
        MyClass(int val) : m_val(val) {}
        int value() { return m_val; }
    private:
        int m_val;
    };
    MyClass c1(100), c2(200);
    swap(c1, c2);
    std::cout << "c1: " << c1.value() << ", c2: " << c2.value() << std::endl;

    return 0;
}