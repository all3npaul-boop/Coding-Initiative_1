#include <iostream>
using namespace std;

// Function Template with two parameters
template <class T1, class T2>
auto multiply(T1 a, T2 b)
{
    return a * b;
}

int main()
{
    cout << "Multiply(10, 5.5) = " << multiply(10, 5.5f) << endl;
    cout << "Multiply(4.5, 2.2) = " << multiply(4.5f, 2.2) << endl;

    return 0;
}
