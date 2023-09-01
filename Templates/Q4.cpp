/*Write a C++ Program to Swap data using function template.*/
#include<iostream>
template < class T > void swap1(T &a,T &b)
{
    T temp ;
    temp = a ;
    a = b ;
    b=temp;   
}
using namespace std;
int main()
{
    int a=10, b=14;
    cout<<"a="<<a<<endl<<"b="<<b;
    swap(a,b);
    cout<<"a="<<a<<endl<<"b="<<b;
return 0;
}