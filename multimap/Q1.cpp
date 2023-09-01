#include<iostream>
#include<map>

using namespace std;
void display(multimap<int,string> m)
{
    cout<<"\n";
    for(auto it=m.begin();it!=m.end();it++)
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
int main()
{
    multimap<int,string> map;
    map.insert({1,"sushil"});
    map.insert({1,"sushil"});
    map.insert({2,"ravi"});
    map.insert({3,"amit"});
    display(map);


return 0;
}