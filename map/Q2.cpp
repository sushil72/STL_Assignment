/*Create a map, where insert keys and values as string type and integer type
respectively and print it on the screen*/

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m1;
    map<int,int> m2;
    m1.insert(pair(1,"sushil"));
    m1.insert(pair(2,"kumar"));
    m1.insert(pair(3,"sandeep"));
    m1.insert(pair(5,"prashant"));
    m2.insert({5,10});
    m2.insert({6,100});
    m2.insert({5,1000});
    m2.insert({2,10000});
    
    cout<<"\nStrings in the map1 \n\t ";
    cout<<"keys     names"<<endl;
    for(auto it=m1.begin();it!=m1.end();it++)
    cout<<it->first<<"  "<<it->second <<endl;
    cout<<"\n integer values in the map 2\n";
    
    cout<<"keys  values\n";
     for(auto it=m2.begin();it!=m2.end();it++)
    cout<<it->first<<"  "<<it->second <<endl;

    cout<<"\n Reverse order \n";
    for(auto it=m2.rbegin();it!=m2.rend();it++)
    cout<<it->first<<" "<<it->second<<"\n";

return 0;
}