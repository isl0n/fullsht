class LinearEquation {
private:
    double a, b; // ������������ ��������� ax + b = 0

public:
    LinearEquation(double _a, double _b) {
        a = _a;
        b = _b;
    }

    double solve() { // ����� ������� ���������
        if (a == 0) {
            if (b == 0) {
                return INFINITY; // ��������� ����� ����������� ��������� �������
            }
            else {
                return NAN; // ��������� �� ����� �������
            }
        }
        else {
            return -b / a; // ���������� ������� ���������
        }
    }
};