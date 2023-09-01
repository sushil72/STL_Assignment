#include<iostream>
// #include<bits/stdc++.h>
#include<list>
using namespace std;
void display(list<char> L)
{
    list<char>::const_iterator i;
    for( i=L.begin() ; i!=L.end();i++)
    {
           cout<<*i<<" ";
    }
}

void display(list<char> L)
{
   
    for(auto i=L.begin() ; i!=L.end();i++)
    {
           cout<<*i<<" ";
    }
}
int main()
{
    list<char> l1;
    for(int i='A';i<='Z';i++)
    l1.push_back(i);
    display(l1);
return 0;
}
