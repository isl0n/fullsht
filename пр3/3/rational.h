class rational
{
    int a, b;
    bool canExist;

public:
    rational();
    rational(int a1, int b1);
    void set(int a1, int b1);

    void show();

    int get_a();
    int get_b();

    rational operator= (rational A);

    rational operator++(int);

    rational operator+ (rational B);

    friend rational operator - (rational A, rational B);
};

bool operator== (rational A, rational B);

rational operator> (rational A, rational B);