#include <iostream>
#include <deque>
using namespace std;

// Function to display deque
void display(deque<int> d)
{
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> d;

    // push_back
    d.push_back(10);
    d.push_back(20);
    cout << "After push_back: ";
    display(d);

    // push_front
    d.push_front(5);
    d.push_front(1);
    cout << "After push_front: ";
    display(d);

    // pop_back
    d.pop_back();
    cout << "After pop_back: ";
    display(d);

    // pop_front
    d.pop_front();
    cout << "After pop_front: ";
    display(d);

    return 0;
}
