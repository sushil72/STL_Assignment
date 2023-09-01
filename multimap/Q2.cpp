#include<iostream>
#include<map>
using namespace std;
void display(multimap<int,int> m)
{
    cout<<"\n";
    // for(auto it=m.begin();it!=m.end();it++)
    // cout<<(*it).first<<" "<<(*it).second<<endl;
    for(pair<int,int> it : m)
    cout<<it.first<<" "<<it.second<<endl;
}
int main()
{
    multimap<int,int>map1;
    map1.insert(pair<int,int>(0,114));
    map1.insert(pair(5,166));
    map1.insert(pair(4,15));
    map1.insert(pair(3,22));
    map1.insert(pair(2,33));
    map1.insert(pair(2,65));
    map1.insert(pair(1,55));
    cout<<"\n\t";
    // display(map1); 

    // multimap<int,int> map2(map1.begin(),map1.end()); 
    // map2.insert(map1.begin(),map1.end());
    multimap<int,int> map2;
    map1.swap(map2);
//erase all element from multimap
    // map2.erase(1);
    // map2.erase(2);

    // delete single element 
    int k=2;
    for(auto it=map2.begin();it!=map2.end();it++){
    if(it->first==k)
    cout<<it->first<<" "<<it->second<<endl;
    }
    // display(map2);




    return 0;
}