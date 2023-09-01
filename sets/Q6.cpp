/*How to find the lower bound of any desired element from the set.*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> mySet;
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(10);
    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(3);

    cout<<"Lower Bound 1: "<<*mySet.lower_bound(1)<<endl;
    cout<<"Lower Bound 2: "<<*mySet.lower_bound(2)<<endl;
    cout<<"Lower Bound 13: "<<*mySet.lower_bound(13)<<endl;
    cout<<"Lower Bound 6: "<<*mySet.lower_bound(6);

return 0;
}