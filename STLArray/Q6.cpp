    //Using STL  to check whether an array is empty or not.
#include <bits/stdc++.h>

using namespace std;
int main()
{
    array<int,5 > arr1{10,20,30,50,44};
    array<int,2 > arr2;
    array<int,2 > arr3{};
    array<int,0> arr4{};
    cout<<"array 1="<<arr1.empty()<<endl;
    cout<<"array 1="<<arr2.empty()<<endl;
    cout<<"array 1="<<arr3.empty()<<endl;
    cout<<"array 1="<<arr4.empty()<<endl;


return 0;
}