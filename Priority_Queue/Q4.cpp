/*Write a c++ program, to swap the elements of two priority queues of int type.*/
#include <iostream>
using namespace std;
#include <queue>
void display(priority_queue<int> q)
{
    cout << "\n";
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
}
int main()
{
    priority_queue<int> queue1;
    priority_queue<int> queue2;
    queue1.push(12);
    queue1.push(52);
    queue1.push(32);
    queue1.push(42);
    queue1.push(22);
    cout<<"queue1 : ";
    display(queue1);
    // pushin elements in the queue 2

    queue2.push(94);
    queue2.push(97);
    queue2.push(95);
    queue2.push(97);
    queue2.push(98);
cout<<"queue1 : ";
    display(queue2);
queue1.swap(queue2);

cout<<"\n After Swapping";
cout<<"queue1 : ";
display(queue1);
cout<<"\nQueue 2:";
display(queue1);

    return 0;
}