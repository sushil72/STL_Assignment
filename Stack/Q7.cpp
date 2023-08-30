#include<iostream>
#include<stack>
using namespace std;
/*Create a stack of int type and sort it*/
void display(stack<int> s)
{
    cout<<"\n";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    stack<int> st,st2;
    for(int i=0;i<9;i++)
    st.push(2*i);
    display(st);
    cout<<"\n";
     for(int i=0;i<st.size();)
     {
    st2.push(st.top());
    st.pop();
     }
    display(st2);
    return 0;
}