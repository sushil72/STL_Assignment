/*Find the first and last element using the STL array.*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,5> arr={10,20,30,49,90};
    cout<<"Front="<<arr.front();
    cout<<"Back="<<arr.back();
    
return 0;
}