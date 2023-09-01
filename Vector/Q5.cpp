#include <iostream>
#include <vector>
#include <algorithm>
/*Find largest and smallest elements in a vector*/
using namespace std;
int main()
{
    // creating an empty vector to store input values from user.
    // cout<<"Enter the size of Vector: "; cin>>n;
    vector<int> v;
    cout<<"Enter elements in array : "<<endl;
    int n, i;
    cin>>i;
    while (i)
    {
        v.push_back(i);
        cout<<"Pres 0 to stop appending"<<endl;
        cout<<"Enter elements in array : "<<endl;
        cin>>i;
       
    }
    sort(v.begin(), v.end()); /*sorting the array using'sort()'
   function provided by STL.*/
    if (!v.empty())
    {
        cout << "\nSmallest Element is : " << v[0];
        cout << endl
             << " Largest Element is :" << v[v.size() - 1];
    }
    return 0;
}