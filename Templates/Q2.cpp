/*Write a C++ Program to find Largest among two numbers using function template*/

#include<iostream>
using namespace std;

template <class T>    
T max1(T a , T b)
{
    return ( (a>b) ? a:b);
}
int main()
{
    cout<<"Largest="<<max(10,20)<<endl;
    cout<<"Largest"<<max(1,0)<<endl;

}