#include "Sea.h"
#include <iostream>
#include <string>

Sea::Sea()
{
    oceanParent = nullptr;
}

Sea::Sea(std::string _name) : Ocean(_name)
{
    oceanParent = nullptr;
}

Sea::Sea(std::string _name, Ocean* _oceanParent) : Ocean(_name)
{
    oceanParent = _oceanParent;
}

Sea::Sea(std::string _name, int _depth, int _size) : Ocean(_name, _depth, _size)
{
    oceanParent = nullptr;
}

Sea::Sea(std::string _name, int _depth, int _size, Ocean* _oceanParent) : Ocean(_name, _depth, _size)
{
    oceanParent = _oceanParent;
}


std::ostream& operator<<(std::ostream& stream, Sea obj)
{
    stream << "��� ������� - " << obj.getType() << '\n';
    stream << "�������� - " << obj.name << '\n';

    std::string oceanParentName = (obj.oceanParent ? obj.oceanParent->getName() : "���������� ����");
    stream << "� ����� ������ ��������� - " << oceanParentName << '\n';

    stream << "������� - " << obj.depth << " �\n";
    stream << "������ - " << obj.size << " �� ��\n";

    return stream;
}


void Sea::setParent(Ocean* _oceanParent)
{
    oceanParent = _oceanParent;
}


Ocean* Sea::getParent()
{
    return oceanParent;
}

std::string Sea::getType()
{
    return "Sea";
}