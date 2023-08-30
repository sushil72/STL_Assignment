#include<iostream>
using namespace std;
#include<queue>
int main()
{
queue<int> q;
q.push(11);
q.push(13);
q.push(15);
q.push(14);
q.push(13);
q.push(12);

// cout<<q.front();
// q.pop();
// cout<<q.front();
// cout<<endl<<q.back();
while(!q.empty())
{
    cout<<q.front()<< " ";
    q.pop();
}


return 0;
}