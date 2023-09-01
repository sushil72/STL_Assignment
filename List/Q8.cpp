#include<iostream>
//#include<bits/stdc++.h>
#include<list>
#include<iterator>
using namespace std;
void display(list<int> L);
int main()
{
    list<int> list1{12,23,43,21,45,32,21,43,12};
    display(list1);
    // list1.remove(43); cout<<endl;
    // list1.remove(12); cout<<endl;

    display(list1) ; cout<<"\n";
    list1.erase(list1.begin());
    display(list1);
    
return 0;
}

void display(list<int> L)
{
    for (auto i = L.begin(); i != L.end(); i++)
    {
        cout << *i << " ";
    }
}