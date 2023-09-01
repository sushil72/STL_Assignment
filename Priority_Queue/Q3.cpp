// Write a c++ program, to demonstrate priority queue having a min element at top.
#include<iostream>
using namespace std;
#include<queue>
int main()
{
    cout<<"\n Min Priority Queue"<<endl;
priority_queue <int,vector<int>,greater<int> > minQ; 
minQ.push(65);minQ.push(12);
    minQ.push(39);
    minQ.push(16);
    minQ.push(54);
    minQ.push(13);

    minQ.pop();
cout<<"\nsize of priority queue "<<minQ.size()<<endl;
while (!minQ.empty())
{
    /* code */
     /* code */cout<<minQ.top()<<" ";
    minQ.pop();
}
return 0;
}