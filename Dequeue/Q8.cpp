/*Remove elements from a container from the specified position or range in deque.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq{12,11,13,44,55,66,77};
    cout<<"\nHere is the element\n ";
    for(auto it = dq.begin(); it!=dq.end();it++)
    cout<<*it<<" ";
    cout<<"\n enter Which positioned number want to delete \n";
    int pos;
    cin>>pos;
    deque<int> :: iterator it=dq.begin();
    for(int i=1;i<=pos-1;i++)
    it++;
    dq.erase(it);
    cout<<"\n After deletion \n";
    for(auto it = dq.begin(); it!=dq.end();it++)
    cout<<*it<<" ";
return 0;
}