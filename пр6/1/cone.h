// Класс конусов

class Cone
{
    double x, y, z;

    double radius;
    double height;

public:
    Cone();

    Cone(double _radius, double _height);

    Cone(double _x, double _y, double _z, double _radius, double _height);

    void Set(double _x, double _y, double _z, double _radius, double _height);

    void Print();

    double Area();

    double Volume();
};