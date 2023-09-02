/*C++ program to find the integers which come an odd number of times in an array
using C++ STL.*/

#include<iostream>
using namespace std;
#include<array>
// O(n) method 
int OddInteger(array<int , 5> a)
{

int result =0;

    for(int i=0;i<a.size();i++)
    {
       result=result^a[i];
    }
    return result;
}
int main()
{
    array<int ,5> arr{2,3,3,2,2};
    int count,i;  
    // //O(n^2) method with 2 loops 
    // for( i=0;i<arr.size();i++)
    // {
    //     count =0;
    //     for(int j=0;j<arr.size();j++)
    //     {
    //         if(arr[i]==arr[j])
    //         count++;
    //     }
    
    // if(count%2==1)
    // {
    // cout<<arr[i]<<" ";
    // }

    // }

    //2 method 
    int result=OddInteger(arr);
    cout<<"Odd integer="<<result;
return 0;
}