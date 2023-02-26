// ���������� ������ Figure


#include "Figure.h"
#include <iostream>
#include <math.h>


// �����������
Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{


    // ����� ������
    s12 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    s23 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    s34 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    s41 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));



    // ���������
    float x_d13 = x3 - x1, y_d13 = y3 - y1;
    float x_d24 = x4 - x2, y_d24 = y4 - y2;

    d13 = sqrt(pow(x_d13, 2) + pow(y_d13, 2));
    d24 = sqrt(pow(x_d24, 2) + pow(y_d24, 2));



    // ���� ����� �����������
    float a = (x_d13 * x_d24 + y_d13 * y_d24);
    float b = sqrt(pow(x_d13, 2) + pow(y_d13, 2)) * sqrt(pow(x_d24, 2) + pow(y_d24, 2));
    float cosa = a / b;
    alfa = acos(cosa);



    // �������
    S = d13 * d24 * sin(alfa);



    // ��������
    P = s12 + s23 + s34 + s41;
}



// ������� ��� ��������� �� �����
void Figure::show()
{
    std::cout << "\n���������� ������:\n";
    std::cout << "1: " << x1 << ' ' << y1 << '\n';
    std::cout << "2: " << x2 << ' ' << y2 << '\n';
    std::cout << "3: " << x3 << ' ' << y3 << '\n';
    std::cout << "4: " << x4 << ' ' << y4 << "\n\n";

    std::cout << "\n�������: " << S << "\n\n";

    std::cout << "\n��������: " << P << '\n';
}



// ����?
bool Figure::is_romb()
{
    bool allSidesEqual = (s12 == s23 == s34 == s41);


    return(allSidesEqual && alfa == M_PI_2);
}



// �������������?
bool Figure::is_prug()
{
    // ���� ����� s12 � s23
    float a = (x1 * x2 + y1 * y2);
    float b = sqrt(pow(x1, 2) + pow(y1, 2)) * sqrt(pow(x2, 2) + pow(y2, 2));
    float cosa = a / b;
    float angle_12_23 = acos(cosa);



    // ���� ����� s23 � s34
    a = (x2 * x3 + y2 * y3);
    b = sqrt(pow(x2, 2) + pow(y2, 2)) * sqrt(pow(x3, 2) + pow(y3, 2));
    cosa = a / b;
    float angle_23_34 = acos(cosa);



    // ���� ����� s34 � s41
    a = (x3 * x4 + y3 * y4);
    b = sqrt(pow(x3, 2) + pow(y3, 2)) * sqrt(pow(x4, 2) + pow(y4, 2));
    cosa = a / b;
    float angle_34_41 = acos(cosa);



    // ���� ����� s41 � s12
    a = (x4 * x1 + y4 * y1);
    b = sqrt(pow(x4, 2) + pow(y4, 2)) * sqrt(pow(x1, 2) + pow(y1, 2));
    cosa = a / b;
    float angle_41_23 = acos(cosa);

    bool allAnglesSquare = (angle_12_23 == M_PI_2 && angle_23_34 == angle_12_23 && angle_34_41 && angle_41_23 == angle_12_23);


    // ��������, ��� ��������������� ������� �����
    bool oppositeSidesEqual = (s12 == s34 || s23 == s41);


    // �����
    return(allAnglesSquare && oppositeSidesEqual);
}

// ������� �� 
bool Figure::is_square()
{
    // �������� �� ��, ��� ��� ������� �����
    bool allSidesEqual = (s12 == s23 == s34 == s41);



    // �����
    return(is_prug() && allSidesEqual);
}



// ����� �� ������� � �����������
bool Figure::is_in_circle()
{

}



// ����� �� ������� ����������
bool Figure::is_out_circle()
{

}