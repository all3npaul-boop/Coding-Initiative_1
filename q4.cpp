#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    // Adding elements
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);
    l.push_front(1);

    // Displaying elements
    cout << "List elements: ";
    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}
