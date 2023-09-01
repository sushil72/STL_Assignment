/*Count of distinct pair sums in a given Array arr[] of size N, the task is to find the total
number of unique pair sums possible from the array elements.*/

#include<iostream>
#include <unordered_set> 
#include<iterator>
#include<vector>
using namespace std;
int countDistinctPair(vector<int> arr, int target)
{
    unordered_set<int> set;
    unordered_set<int> seen;
    int count=0;
    for(auto num : arr) 
{
    if(set.find(target-num)!=set.end() && seen.find(num)==seen.end())
    {
        count++;
        seen.insert(num);
        seen.insert(target-num);
    }
    set.insert(num);
}
    return count;

}

int main()
{
    vector<int> arr{1,2,3,4,5,4};
    int target=6;
    int count=countDistinctPair(arr,target);
    cout<<count; 
return 0;
}