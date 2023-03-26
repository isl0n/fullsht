#include "Ocean.h"
#include <iostream>
#include <string>

Ocean::Ocean()
{
    name = "*placeholder*";
    depth = size = 0;
}

Ocean::Ocean(std::string _name)
{
    name = _name;
    depth = size = 0;
}

Ocean::Ocean(std::string _name, int _depth, int _size)
{
    name = _name;
    depth = _depth;
    size = _size;
}


std::ostream& operator<<(std::ostream& stream, Ocean obj)
{
    stream << "��� ������� - " << obj.getType() << '\n';
    stream << "�������� - " << obj.name << '\n';
    stream << "������� - " << obj.depth << " �\n";
    stream << "������ - " << obj.size << " �� ��\n";

    return stream;
}


std::string Ocean::getName()
{
    return name;
}

int Ocean::getDepth()
{
    return depth;
}

int Ocean::getSize()
{
    return size;
}

std::string Ocean::getType()
{
    return "Ocean";
}
