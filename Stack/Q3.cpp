/*Create a stack, and implement main operations like push(), pop(), peek(), empty()
and size().*/

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
class stack
{
    int top = -1;
    int arr[10];
    int size = 10;

public:
    void push(int v)
    {
        if (isfull())
        {
            cout << "\nOverflow";
            return;
        }
        top++;
        arr[top] = v;
        // cout << "\nData inserted at " << top;
        // arr[++top] = v;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "\nUnderflow";
        }
        else
        {
            // cout<<"\n"<<arr[top]<<"is Poped"<<endl;
            top--;
        }

    }

     int peek()
    {
        if(isEmpty())
            cout<<"Underflow";
        else
        {

           return arr[top];
        }
    }

    int isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    int isfull()
    {
        if (top == size - 1)
            return 1;
        else
            return 0;
    }

};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // cout<<"\nTop : "<<s.peek();

    // s.pop();
    // s.pop();
    // s.pop();
//    cout<<"\nTop : "<<s.peek();

   while(!s.isEmpty())
   {
    cout<<s.peek()<<"\n";
    s.pop();
   }
    return 0;
}
