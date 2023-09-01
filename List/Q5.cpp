#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*input and add element to list*/
void display(list<int>);
    
int main()
{
    list<int> list1;
    int x=1;
    cout<<"Enter Number to add in list : (enter 0 to stop )";
    while (x!=0)
    {
        /* code */
        cin>>x;
        if(x!=0)
        list1.push_back(x);
    }
    display(list1);
return 0;
}

void display(list<int> L)
{
    for(auto i=L.begin();i!=L.end();i++)
    cout<<*i<<"  ";

    cout<<"\nFront : "<<L.front();
    cout<<"\nLast :"<< L.back();
}