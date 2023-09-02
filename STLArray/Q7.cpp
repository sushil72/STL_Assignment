/*Sort an array in ascending order using sort() function in C++ STL*/
#include<iostream>
#include<array>
#include<algorithm>


using namespace std;
int main()
{
 array <float,5> arr{10.5,2.5,3.5,5.5,6.6};
 cout<<"Before sorting the elements of Array are :"<<endl;
 for(auto i:arr)
 cout<<i<<"  ";
 int size = sizeof(arr)/arr[0];  
 cout<<"After sorting the elements of Array are :"<<endl;
 sort(begin(arr),end(arr)); //sorts a range [first,last), where first and last denote   

 for(auto i:arr)
 cout<<i<<"  ";
 
return 0;
}