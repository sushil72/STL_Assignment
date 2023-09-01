#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(list<int> L)
{
    for(auto i=L.begin();i !=L.end(); i++)
    {
        cout<<*i<<" ";
    }
}
int main()
{
        list<int> L1;
        int array[]={12,12,34,56,78,99};
        for(int i=0;i<6;i++)
        L1.push_back(array[i]);
        display(L1);

return 0;
}