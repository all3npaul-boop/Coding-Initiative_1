#include <iostream>
using namespace std;

// Class Template
template <class T>
class Number
{
private:
    T value;

public:
    Number(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Stored Value: " << value << endl;
    }
};

int main()
{
    Number<int> n1(10);      // Integer object
    Number<double> n2(5.75); // Double object

    n1.display();
    n2.display();

    return 0;
}
