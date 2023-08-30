/*In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out)
elements arrangement i.e. the elements which insert first will be removed first. In the
queue, elements are inserted at one end known as "back" and are deleted from
another end known as "front".empty() and size() function of the queue with the
Example.*/


#include<iostream>
using namespace std;
#include<queue>

int main()
{
    queue<string> q;
    q.push("Sushil");
    q.push("Amit");
    q.push("Ayush");
    q.push("Sandeep");
    q.push("Prasanta");

    cout<<"\nSize ="<<q.size()<<endl;
    cout<<"\nFront ="<<q.front()<<endl;
    cout<<"\nBack ="<<q.back()<<endl;
    if(q.empty())
    cout<<"\nEmpty";
    else
    cout<<"Not empty";
    
return 0;
}