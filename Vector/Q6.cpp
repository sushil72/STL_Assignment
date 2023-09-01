/*Write a program to reverse vector elements*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v{1,3,2,4,3};
    //reverse the entire container using algorithm library function
    reverse(v.begin(),v.end());
    for (auto i : v)
    cout<<i<<" ";
   
}