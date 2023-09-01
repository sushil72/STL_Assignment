#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
/*Given two maps map1 and map2 having a string as the key and arrays of integers as
values, the task is to merge them in one map such that if a key is common in both the
maps, the respective arrays should be merged.
Example:
Input: map1 = { (“key1”, {0, 1}), (“key2”, {0, 1}) }, map2 = { (“key2”, {1, 2}) };
Output: { (key1, {0, 1}), (key2, {0, 1, 2}) }
Explanation: After merging key1 array will become {0, 1} and for key2 after merging
array will become {0, 1, 2}*/
map<string,vector<int>> mergeMap(map<string,vector<int>> map1, map<string,vector<int>> map2)
{
    auto it1=map1.begin();
    auto it2=map2.begin();
    for(int i=0;i<map1.size()>map2.size()?map1.size() : map2.size();i++)
    {
        
    map<int,vector<int>> map3; 
    map3.insert(map1.begin(),map1.end());
    // for(auto it3=map3.begin();it3!=map3.end();it3++)
    // {
        map3.insert(map2.begin(),map2.end());
    
    
    
    }
    
}
void display(map<string, vector<int>> m)
{
    auto it=m.begin();
    while( it!=m.end()){

        for(int i=0;i<it->second.size();i++)
        {
        cout<<it->first<<" "<<it->second[i]<<endl;

        }
        it++;
    }
    
}
int main()
{
    map<string,vector<int>> map1,map2;
    map1["key1"].push_back(1);
    map1["key1"].push_back(0);
    map1["key2"].push_back(2);
    display(map1);
    

return 0;
}