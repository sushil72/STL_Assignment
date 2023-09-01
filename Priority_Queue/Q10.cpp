/*. Given an array arr[] of size N and a number K, the task is to find the length of the
smallest subsequence such that the sum of the subsequence is greater than or equal
to number K do it using priority_queue.
Example:
Input: arr[] = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5}, K = 35
Output: 4
Smallest subsequence with the sum greater than or equal to the given sum K is {7, 9,
14, 10}
Input: arr[] = {1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12}, K = 70
Output:-1
Subsequence with sum greater than equal to the given sum is not possible.*/
#include<iostream>
#include<queue>
using namespace std;
void display(priority_queue<int> q)
{
    cout<<"\n";
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    
}
int smallestSubsequence(int k, vector<int> arr)
{
    // priority_queue<int, vector<int> , greater <int> > Q;
    priority_queue<int> Q;
    int count=0;
    for(auto i : arr)
    Q.push(i);

    // display(Q);
    int sum=0;
    while(sum<=k)
    {
        sum+=Q.top();
        count++;
        Q.pop();
    if(Q.empty() && sum<k)
    return -1;
    }
    
    // display(Q);
    return count;
}
int main()
{
    // vector<int> arr = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5};
    vector<int> arr={1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12};
    int k=70;
    cout<<"\n Output ="<<smallestSubsequence(k,arr);
return 0;
}