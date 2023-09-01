/*sum of all the element in the vector */
#include<iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;
int main()
{
    int sum=0;
    vector<int > v{1,2,3,4,5,6,7,8,9,10};
    // for(auto i:v)
    // sum=sum+i;
    sum=accumulate(v.begin(),v.end(),0);
    cout<<"some ="<<sum<<" ";
return 0;
}