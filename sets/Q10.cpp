/*You have a set of integer s, which originally contains all the numbers from 1 to n.
Unfortunately, due to some error, one of the numbers in s got duplicated to another
number in the set, which results in repetition of one number and loss of another
number.You are given an integer array nums representing the data status of this set
after the error.Find the number that occurs twice and the number that is missing and
return them in the form of an array.*/
#include <iostream>
#include <set>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3,3, 5, 6};
    set<int> s;
   int index=0;
   vector<int> nums;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    int setSize = s.size();
    int i=1; 
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<"\n"<<*it<<" "<<i;
        if(*it!=i)
        {
            nums.push_back(i);
            nums.push_back(i-1);
            break;
        }
        i++;
    }
    cout << "\nSize of the set = :" << setSize << endl;
    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
    return 0;
}