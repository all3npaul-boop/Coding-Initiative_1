#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Adding elements
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // Using iterator
    vector<int>::iterator it;

    cout << "Vector elements: ";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
