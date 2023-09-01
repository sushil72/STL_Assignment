/*Convert string into set in stl*/
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    string name="susheel";
    set<char> s;
    for(auto i : name)
    s.insert(i);

    set<char>::iterator it=s.begin();
    for(it; it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
return 0;
}