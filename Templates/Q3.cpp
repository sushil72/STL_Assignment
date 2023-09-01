/*Write a C++ program to find the largest of three elements using a template.*/
#include<iostream>
using namespace std;
template < class T>
T maximum(T a, T b, T c )
{
    if(a>b && a> c)
    return a;
    else
    if(b>a && b >c)
    return b;
    else 
    return c;
    
}

int main()
{
 cout<<"maxx ="<<maximum(21,34,32);
 cout<<"maxx ="<<maximum(21.5,3.4,32.5);
 return 0;
}