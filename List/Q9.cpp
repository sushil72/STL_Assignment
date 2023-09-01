/*delete consecutive duplicate numbers */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(list<int> L)
{
    for(auto i=L.begin();i!=L.end();i++)
    cout<<*i<<" ";
}
int main()
{
    list<int> list1{10,10,20,30,4,4};
    display(list1);
    list1.unique(); cout<<"\n";
    display(list1);
return 0;
}