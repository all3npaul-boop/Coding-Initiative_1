
#include <iostream>
using namespace std;

// Function Template
template <class T>
void swapValues(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    char x = 'A', y = 'B';

    cout << "Before swap: a=" << a << " b=" << b << endl;
    swapValues(a, b);
    cout << "After swap: a=" << a << " b=" << b << endl;

    cout << "\nBefore swap: x=" << x << " y=" << y << endl;
    swapValues(x, y);
    cout << "After swap: x=" << x << " y=" << y << endl;

    return 0;
}
