#include<iostream>
#include<unordered_set>
#include<vector>
#include<set>
using namespace std;
void GetXORTriplet(vector<int> v)
{
    unordered_set<int > s;
    set<int> ss;
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            int num=(v[j]^v[i]);
            if(s.find(num)!=s.end() && num!=v[i] && num!=v[j])
            {
                // cout<<v[i]<<" "<<v[j]<<" "<<num<<endl;
                count++;
            }
        }
    }
    cout<<count/3;
}
int main()
{
    vector<int> v={4, 7, 5, 8, 3, 9};
    GetXORTriplet(v);
return 0;
}