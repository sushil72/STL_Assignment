/*Create stack1 of int type, and create another stack of the same type with name
stack2 and copy all the elements of stack1 into stack2 in the same order.*/
#include<iostream>
#include<bits/stdc++.h>
// #include<stack>
using namespace std;
void display(stack<int> s)
{
    while (!s.empty())
    {
        cout<<"\n";
        cout<<s.top()<<endl;
        s.pop();
    }
    
}
int main()
{
    stack<int> stack1;
    
    for(int i=0;i<5;i++)
    stack1.push(5*i+1);

    // stack2=stack1;
    stack<int> stack2(stack1); 
    display(stack1);
    display(stack2);
    
return 0;
}