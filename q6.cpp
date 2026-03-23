#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T a, T b)
    {
        num1 = a;
        num2 = b;
    }

    void add()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << num1 - num2 << endl;
    }
};

int main()
{
    Calculator<int> c1(10, 5);
    Calculator<float> c2(5.5, 2.2);

    cout << "Integer Calculation:" << endl;
    c1.add();
    c1.subtract();

    cout << "\nFloat Calculation:" << endl;
    c2.add();
    c2.subtract();

    return 0;
}
