/*Write a function to print the element of a vector and take input from the user.*/
#include<iostream>
#include<vector>
using namespace std;
void printAll(vector <int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<"\nSize="<<v.size()<<endl;
    cout<<"\nCapacity="<<v.capacity();
    
}
int main()
{
    vector <int> v;
    int i=0;
    cout<<"Enter some numbers(enter -1 for end input)"<<endl;
    while(1)
    {
        cin>>i;
        if(i==-1)
        break;
        else
        v.push_back(i);
    }
    printAll(v);
return 0;
}