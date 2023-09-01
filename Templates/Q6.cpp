/*Write a C++ Program to find Sum of Array using function template.*/
#include<iostream>
template <class T> T SumArray(T a[], T  size)
{
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    return sum;
    
}

using namespace std;
int main()
{
     int a[]={2,3,4,5,6};

    cout<<"Sum of the array is = :"<<SumArray(a,5);
return 0;
}