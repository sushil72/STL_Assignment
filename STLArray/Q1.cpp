/*Using STL Array gets and sets a reference to an element based on a given index.*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a;
    for(int i=0;i<a.size();i++)
    {
        cin>>a.at(i);
    }

    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<" ";
    }
cout<<endl;

for()
    for(int i : a)
    cout<<i<<endl;

    
return 0;
}