/*upper bound */
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    cout<<"\n Elements in the set is : \n";
    for(set<int> :: iterator it=s.begin(); it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    set<int> :: iterator it=s.upper_bound(1);

    cout<<"upper bound of 1 : "<<*it<<endl;
    it=s.upper_bound(2);
    cout<<"upper bound of 2 : "<<*it<<endl;
    it=s.upper_bound(3);
    cout<<"upper bound of 3 : "<<*it<<endl;
    it=s.upper_bound(4);
    cout<<"upper bound of 4 : "<<*it<<endl;
    it=s.upper_bound(8);
    cout<<"upper bound of 8 : "<<*it<<endl;
    it=s.upper_bound(9);
    cout<<"upper bound of 9 : "<<*it;

    








return 0;
}