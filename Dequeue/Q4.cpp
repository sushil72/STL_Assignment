/*Returns a constant iterator pointing to the first element of the container, that is, the
iterator cannot be used to modify, only traverse the deque*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq{12,13,44,56,77,88};
    deque<int>::const_iterator it =dq.begin();
   
    for(it;it!=dq.end();it++)
    cout<<*it<<" ";
    cout<<"\nsize="<<dq.size();
    cout<<"\ncapacity="<<dq.max_size();
return 0;
}