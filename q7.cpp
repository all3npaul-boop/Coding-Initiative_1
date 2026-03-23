#include <iostream>
using namespace std;

// Template Class
template <class T>
class Stack
{
private:
    T arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T value)
    {
        if (top == 4)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = value;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack<int> s1;
    Stack<float> s2;

    cout << "Integer Stack:" << endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();

    cout << "\nFloat Stack:" << endl;
    s2.push(1.5);
    s2.push(2.7);
    s2.push(3.9);
    s2.display();
    s2.pop();
    s2.display();

    return 0;
}
