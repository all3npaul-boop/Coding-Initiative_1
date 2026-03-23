#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // Display size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // Display elements
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
