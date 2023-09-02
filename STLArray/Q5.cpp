
/*C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions*/
#include <iostream>
#include <iterator>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr {10, 20, 22, 33, 31};
    array<string,5> cities {"new delhi", "mumbai", "gwalior"};
    cout << "Array elements are: "<<endl;
    for (auto it = arr.rend()-1; it != arr.rbegin()-1; it--)
    {
        cout << *it << " ";
    }
    cout<< endl;
    for(auto it = cities.rbegin(); it!=cities.rend();it++)
cout<<*it<<"  ";

    return 0;
}