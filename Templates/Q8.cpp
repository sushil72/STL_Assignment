/*Write a C++ Program to implement push and pop methods from stack using
template*/
#include <iostream>
using namespace std;
template <typename T>
class stack
{
private:
    T *arr;
    int top;
    int size;

public:
    stack(int size)
    {
        arr = new T[size];
        top = -1;
        this->size=size;
    }
    void push(T x)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    T pop()
    {
        if (top == -1)
         {
            cout << "Stack Underflow" << endl;
            return 0;
    }
    T x = arr[top];
    top--;
    return x;
    }
    };


int main()
{
    stack<int> s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    
    return 0;
}