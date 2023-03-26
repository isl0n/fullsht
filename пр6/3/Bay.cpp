#include "Bay.h"
#include <iostream>
#include <string>

Bay::Bay()
{
    seaParent = nullptr;
}

Bay::Bay(std::string _name) : Sea(_name)
{
    seaParent = nullptr;
}

Bay::Bay(std::string _name, Sea* _seaParent) : Sea(_name)
{
    seaParent = _seaParent;
}

Bay::Bay(std::string _name, int _depth, int _size) : Sea(_name, _depth, _size)
{
    seaParent = nullptr;
}

Bay::Bay(std::string _name, int _depth, int _size, Sea* _seaParent) : Sea(_name, _depth, _size)
{
    seaParent = _seaParent;
}

std::ostream& operator<<(std::ostream& stream, Bay obj)
{
    stream << "��� ������� - " << obj.getType() << '\n';
    stream << "�������� - " << obj.name << '\n';

    if (obj.seaParent)
    {
        stream << "� ����� ���� ��������� - " << obj.seaParent->getName() << '\n';

        std::string oceanParentName = (obj.seaParent->getParent() ? obj.seaParent->getParent()->getName() : "�� � �����");
        stream << "� ����� ������ ��������� - " << oceanParentName << '\n';
    }

    else
    {
        stream << "�� � �����";
    }

    stream << "������� - " << obj.depth << " �\n";
    stream << "������ - " << obj.size << " �� ��\n";

    return stream;
}


void Bay::setParent(Sea* _seaParent)
{
    seaParent = _seaParent;
}


Sea* Bay::getParent()
{
    return seaParent;
}

std::string Bay::getType()
{
    return "Bay";
}