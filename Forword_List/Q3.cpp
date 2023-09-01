#include<iostream>
#include<bits/stdc++.h>
/*sum of all element */
using namespace std;
int main()
{
    forward_list<int> f1{1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(auto i:f1)
    sum+=i;
    cout<<"\nSum of the all element is list :"<<sum;
    f1.reverse();
    cout<<"\nReverse of the list :"; 
    for(auto i : f1)
    cout<<i<<" ";  
return 0;
}