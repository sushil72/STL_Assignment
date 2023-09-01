#include<iostream>

#include<bits/stdc++.h>
/*Below are two forward lists, first sort them and then merge them.
forwardlist1={3,2,9}
forwardlist2={8,1,2}*/
using namespace std;
int main()
{
    forward_list<int>forwardlist1={3,2,9} ;
    forward_list<int>forwardlist2={8,1,2} ;
    forwardlist1.sort();
    forwardlist2.sort();
    cout<<"\n After sorting :"<<endl;
    cout<<"List 1: ";
    for(auto i : forwardlist1)
    cout<< i <<" ";
    cout<<"\n List 2:";
    for(auto i : forwardlist2)
    cout<< i <<" ";
    forwardlist2.merge(forwardlist1);
    cout<<"\n After Merging "<<endl;
    for(auto i: forwardlist2 )
    cout<<i<<" ";
    
    
return 0;
}