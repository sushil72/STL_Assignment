/*Returns a reverse iterator which points to the last element of the deque (i.e., its
reverse beginning)*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq{1,2,3,4,5,6};
    for(auto it=dq.rbegin(); it!=dq.rend(); it++)  
    cout<<*it<<" ";
return 0;
}