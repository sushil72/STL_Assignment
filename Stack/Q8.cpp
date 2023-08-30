#include<iostream>
// #include<bits/stdc++.h>
#include<stack>
using namespace std;
void display(stack<int> s)
{
    cout<<"\n";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
/*Create a stack of int type and sort it in descending order.*/
int main()
{
    stack<int> st;
    stack<int> st2;
    for(int i=0;i<10;i++)
    st.push(i*3);
    display(st);
    
    

return 0;
}