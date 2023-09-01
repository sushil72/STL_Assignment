/*Write a c++ code, to demonstrate the forward list.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(forward_list<int> F)
{
    for(forward_list<int>::iterator i=F.begin();i!=F.end();i++)
    {
        cout<<*i<<" ";
    }
}
int main()
{
    forward_list<int> F1{1,3,4,5,5};
    display(F1);
        

return 0;
}