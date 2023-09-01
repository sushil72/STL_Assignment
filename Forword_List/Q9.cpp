/*Write a C++ code to demonstrate working of splice_after() in forward list.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> F1{1,2,3,4,4,5,6};
    forward_list<int> F2{11,22,33,44,45,56,67};
    forward_list<int> :: const_iterator it=F2.begin();
    F2.splice_after(++it,F1,F1.before_begin(),F2.end());
    cout<<"\n Elements are :"<<endl;
    for(auto i: F2)
    cout<<i<<" ";
    
return 0;
}