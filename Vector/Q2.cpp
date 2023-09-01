/*Declare a vector without initialization, insert some elements and print*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.assign(5,10);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    cout<<"\nsize of the vector ="<<v.size()<<endl;
    cout<<"\n capacity of the vector ="<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
return 0;
}