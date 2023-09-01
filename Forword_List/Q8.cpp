/*Create two forward lists of int type, and swap the elements of both forward lists with
each other*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> f1{1,2,3,4};
    forward_list<int> f2{10,20,30,40};
    forward_list<int> f3;
    cout<<"\n Before swapping :"<<endl;
    cout<<"\n List 1:";

    for(auto i :f1)
    cout<<i<<" ";

    cout<<"\n List 2:" ;
    for(auto i :f2)
    cout<<i<<" ";
    f3.assign(f1.begin(), f1.end());
    f1.assign(f2.begin(), f2.end());
    f2.assign(f3.begin(),f3.end());
    cout<<"\n After swapping :"<<endl;
    cout<<"\n List 1:";

    for(auto i :f1)
    cout<<i<<" ";

    cout<<"\n List 2:" ;
    for(auto i :f2)
    cout<<i<<" ";



return 0;
}