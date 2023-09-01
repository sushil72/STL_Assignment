/*Inserts an element. And returns an iterator that points to the first of the newly inserted
elements*/
#include<iostream>
// #include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{
    deque <int> dq{1,2,3,4,5};
    deque<int>::iterator it = dq.end();
    it=dq.insert(it,10);
    cout<<"Deque Contains: ";
    for(it = dq.begin(); it!=dq.end(); ++it)
    cout<<' ' << *it; 
    cout<< '\n';
return 0;
}