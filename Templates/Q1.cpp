/*Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates*/

#include<iostream>
using namespace std;
template < class T>
T add(T a, T b)
{
    return(a+b);
}
int main()
{
    cout<<"Addition of int parameter : "<<add(10,32)<<endl;
    cout<<"Addition of float  parameter : "<<add(1.5,35.2)<<endl;
return 0;
}