/*😉Checks whether the set is empty or not.if it is empty insert 5 elements in the set*/
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int >  mySet;
    // mySet.insert(10);
    // mySet.insert(30);
    if(mySet.empty())
    {
        cout<<"\n The set is empty i am inserting 5 default element :"<<endl;
    mySet.insert(90);
    mySet.insert(20);
    mySet.insert(50);
    mySet.insert(50);
    mySet.insert(30);
    mySet.insert(40);
    }

    set<int> :: iterator it=mySet.begin();
    for(it; it!=mySet.end();it++)
    {
        cout<<*it<<" ";
    }


return 0;
}