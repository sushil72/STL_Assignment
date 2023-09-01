/*Assign values to the same or different deque container.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq{12,13,44,56,77,88};
    
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
    cout<<"\nFront ="<<dq.front();
    cout<<"\nLast  ="<<dq.back();


return 0;
}