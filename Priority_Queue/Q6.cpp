/*Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
merge them in a sorted manner using priority_queue.
Example:
Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
Output:  4 5 6 7 8 8
*/
#include<iostream>
using namespace std;
#include<queue>
int main()
{
    priority_queue<int, vector<int> , greater<int>  > pq;
    int A[5]={5,4,3,2,6};
    int B[5]={1,7,12,14,15};
    for(int i=0;i<5;i++)
    pq.push(A[i]);
    for(int i=i=0;i<5;i++)
    pq.push(B[i]);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }


return 0;
}