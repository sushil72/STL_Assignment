/*Create a stack of int type, push 5 elements in it and print it on the console screen*/
#include<iostream>
// #include<bits/stdc++.h>
#include<stack>  
using namespace std;

void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    printStack(s);

    

return 0;
}