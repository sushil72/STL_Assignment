/*Reverse a string using a stack.
Example:
Input: str = "Reverse me"
Output: em esreveR*/
#include<iostream>
// #include<bits/stdc++.h>
#include<stack>
using namespace std;
void display(stack<char> s)
{
     cout<<"\n";
    while (!s.empty())
    {
       
        cout<<s.top();
        s.pop();
    }
    
}
void display(stack<string> s)
{
    cout<<"\n";
    while (!s.empty())
    {
        
        cout<<s.top()<<" ";
        s.pop();
    }
    
}
int main()
{
   string str="Reverse me";
   stack<char> stack1;
//    stack<char> stack2;
string temp="";
    

   for(int i=0;i<str.size();i++)
   stack1.push(str[i]); 
    display(stack1);
    

return 0;
}