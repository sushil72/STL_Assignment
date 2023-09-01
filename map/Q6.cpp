/*Create a map, use a member function to tell whether a map is empty or not and then
insert some pairs into the map and find the size of map*/
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<int, int> m;
    if(m.empty()){
        cout<<"The map is empty "<<endl;
    m.insert({1,38});
    m.insert({2,38});
    m.insert({3,38});
    m.insert({4,38});
    m.insert({5,38});

    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    cout<<"\n Size of the map is = "<<m.size();
return 0;
}