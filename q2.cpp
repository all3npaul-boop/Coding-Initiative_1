#include <iostream>
using namespace std;

// Function Template
template <class T>
T sum(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum of 10 and 20 = " << sum(10, 20) << endl;
    cout << "Sum of 4.5 and 3.2 = " << sum(4.5f, 3.2f) << endl;
    cout << "Sum of 6.75 and 2.25 = " << sum(6.75, 2.25) << endl;

    return 0;
}
