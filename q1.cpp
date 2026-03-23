#include <iostream>
using namespace std;

// Function Template
template <class T>
T findMax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Max of 10 and 20 = " << findMax(10, 20) << endl;
    cout << "Max of 4.5 and 3.2 = " << findMax(4.5, 3.2) << endl;

    return 0;
}
