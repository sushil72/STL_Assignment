#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*Iterate a list in reverse order C++ STL*/
void display(list<int> L)
{
    for (auto i = L.begin(); i != L.end(); i++)
    {
        cout << *i << " ";
    }
}

int main()
{

    list<int> list1;
    // for(int i=0; i<list1.size(); i++)
    list1.assign(5,54);
    list1.push_back(10);
    list1.push_back(10);
    list1.push_back(10);
    list1.push_back(10);
    display(list1);
    list1.reverse(); cout<<"\n";
    display(list1);

    return 0;
}