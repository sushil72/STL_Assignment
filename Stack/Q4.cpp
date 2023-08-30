// Reverse the Words of a String using Stack.
// Example:
// Input: str = “I Love To Code”
// Output: Code To Love I

#include<iostream>
// #include<bits/stdc++.h>
#include<stack>

using namespace std;
int main()
{
    stack<string> stack;
    string str="Code To Love I";
    string temp="";
    for(int i=0;i<str.size();i++)
    {
        
        if(str[i]==' ')
        {
        stack.push(temp);
        temp="";

        }

        else
        {
            temp+=str[i];
        }
        
    }
    stack.push(temp);
    str="";
    while(!stack.empty())
    {
        // cout<<stack.top()<<" ";
        // stack.pop();
        str+=stack.top();
        str+=" ";
        stack.pop();

    }

    cout<<str;

return 0;
}