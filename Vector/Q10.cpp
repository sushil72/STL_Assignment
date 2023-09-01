#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*Write a program to check whether an element exists in a vector or not.*/
int main()
{
    vector <int> v{12,234,232,23,4,2};
    cout<<" search element "<<endl;
    int n;
    cin>>n;
  vector <int> ::iterator it= find(v.begin(),v.end(),n);
  if(it!=v.end())
    cout<<"Element Exist at position"<<it-v.begin()+1<<endl;
    else
    cout<<"element does not exist"<<endl;
return 0;
}