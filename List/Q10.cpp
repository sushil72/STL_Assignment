/*merge Two list*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(list<int> L);

int main()
{
list<int> list1{12,3,4,5,6,7};
list<int> list2{1,2,3,4,5,6,6};
display(list1); cout<<endl;
list2.merge(list1); cout<<"\nList 1 :";
display(list1);
cout<<"\nlist 2:";
display(list2);


return 0;
}
void display(list<int> L)
{
    for (auto i = L.begin(); i != L.end(); i++)
    {
        cout << *i << " ";
    }
}