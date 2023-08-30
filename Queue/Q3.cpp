/*Check if a queue is empty or not using queue::size() function*/
#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<int> q;
    q.push(123);
    q.push(123);
    q.push(123);
    q.push(123);
    q.push(123);
    q.push(123);
    q.push(123);
queue<int> q2;
    cout<<"\n size of the queue is :"<<q.size();
    cout<<"\n size of the queue is :"<<q2.size();
    if(q2.size())
    cout<<"\nQueue is not  empty";
    else
    cout<<"\nqueue is empty\n";


return 0;
}