#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    // Adding elements
    l.push_back(30);
    l.push_back(10);
    l.push_back(50);
    l.push_back(20);
    l.push_back(40);

    // Display original list
    cout << "Original List: ";
    for (int x : l)
    {
        cout << x << " ";
    }

    // Sorting the list
    l.sort();
    cout << "\nSorted List: ";
    for (int x : l)
    {
        cout << x << " ";
    }

    // Reversing the list
    l.reverse();
    cout << "\nReversed List: ";
    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}
