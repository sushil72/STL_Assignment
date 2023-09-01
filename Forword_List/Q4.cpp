/*Write a program remove all consecutive duplicate elements from the forward list*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
forward_list<int> f1{10,20,20,30,40,40};
forward_list<int> f2{100,200,200,300,400,400};
f1.unique();
for(auto i : f1)
cout<<i<<" ";
f2.merge(f1);
cout<<"\n After merage :"<<endl;
for(auto i: f2)
cout<<i<<" ";
return 0;
}