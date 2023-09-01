/*Assign the elements to the list (different methods) - Example of list::assign() | C++
STL*/

#include <iostream>
// #include<bits/stdc++.h>
#include <list>
using namespace std;
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
    list<int> list2;
    list<int> list3;
    list<int> list4;

    list1.assign(5, 100);
    cout << "\nsize of list1: " << list1.size() << endl;
    // Using push_back method
    for (int i = 0; i < list2.size(); i++)
        list2.push_back(i * 10);

    display(list2);
    display(list1);
    /*Using assign function with iterators */
    // list <int> ::iterator it1=list1.begin();

    list2.assign(list1.begin(),list1.end()); 
    cout<<"\nsize of list2 : "<<list2.size()<<endl;
    cout<<"\nelements of list2  ";
    display(list2);

    return 0;
}