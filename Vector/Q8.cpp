/*Write a program to find common elements between two vectors.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1{1,2,3,4,5};
    vector <int> v2{1,7,8,9,5};
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int > v3(v1.size()+v2.size());
    vector <int>:: iterator it,end;
    end=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    cout<<"\ncommom elements are:"<<endl;
    for(auto i: v3)
    cout<<i<<" ";
return 0;
}