#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 10> arr ;
    
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr.at(i);
    }
int count=0;
    for(auto i =arr.begin() ; i<arr.end() ; i++ )
    count++;
cout<<"number of element ="<<count;

    return 0;
}