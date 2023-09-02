/*Returns the element from the given index using the STL array.*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int ,5>arr={10,20,30,60,50};
    int index;
    cout<<"enter inde to get between 0 to 5 "<<endl;
    cin>>index;
    cout<<"element is ="<<arr.at(index);
return 0;
}