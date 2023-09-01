/*Write a c++ program, to demonstrate priority queue*/
#include<iostream>
using namespace std;
#include<queue>
int main()
{
    priority_queue<int> pq;
    pq.push(12);
    pq.push(39);
    pq.push(16);
    pq.push(54);
    pq.push(13);
while (!pq.empty())
{
    /* code */cout<<pq.top()<<" ";
    pq.pop();
}

cout<<"\n Min Priority Queue"<<endl;
priority_queue <int,vector<int>,greater<int> > minQ; 
minQ.push(65);
pq.push(12);
    minQ.push(39);
    minQ.push(16);
    minQ.push(54);
    minQ.push(13);

    minQ.pop();
cout<<"\nsize of priority queue "<<minQ.size();
while (!minQ.empty())
{
    /* code */
     /* code */cout<<minQ.top()<<" ";
    minQ.pop();
}





return 0;
}