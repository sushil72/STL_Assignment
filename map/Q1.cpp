#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert({0, 0});
    m.insert({7,25});
    m.insert({6,35});
    m.insert({5,45});
    m.insert({2,55});
    m.insert({3,65});
    cout<<"\nkey value\n";
    cout<<m[0]++<<endl;
    cout<<m[0]++<<endl;
    cout<<"\n Size of the map ="<<m.size();
    // cout<<m[1]<<endl;
    // cout<<m[2]<<endl;
    // for(auto it=m.begin();it!=m.end();it++)
    // cout<<it->first<<"   "<<it->second<<"\n";

return 0;
}