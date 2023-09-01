
/*C++ Program to Print all triplets in sorted array that form AP(or Arithmetic
Progression)       Example..Input : arr[] = { 2, 6, 9, 12, 17, 22, 31, 32, 35, 42 };
Output :
6 9 12
2 12 22
12 17 22
2 17 32
12 22 32
9 22 35
2 22 42
22 32 42*/
#include<iostream> 
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
// #include<bits\stdc++.h>
void getTriplet(vector<int> v)
{
    unordered_set<int> s;
    for(int i=0;i<v.size();i++)
    s.insert(v[i]);
    cout<<"\nsize of s="<<s.size();
    cout<<"\nsize of v="<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
       
        for(int j=i+1;j<v.size();j++)
        {
            int d=v[j]-v[i];
            if(s.find(v[j]+d)!=s.end())
            {
                cout<<v[i]<<" "; 
                cout<<v[j]<<" ";
                cout<<v[j]+d<<" "<<endl;
            }
        }
    }
   
}

void printAlltriplet(vector<int> v)
{
    unordered_set<int> s;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
             int d=v[j]-v[i];
             if(s.find(v[i]-d)!=s.end())
             cout<<v[i]-d<<" "<<v[i]<<" "<<v[j]<<endl;
        }
        s.insert(v[i]);
    }
}

int main()
{
    vector<int> v={2,6,9,12,17,22,31,32,35,42};
    printAlltriplet(v);
    
    
return 0;
}