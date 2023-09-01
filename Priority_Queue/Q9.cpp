/*  

Given three arrays X[], Y[], and Z[] each consisting of N integers, the task is to find 
the maximum number of triplets (X[i], Y[i], Z[i]) such that (X[i] < Y[i] < Z[i]) for any 
permutation of the three arrays using priority_queue
Input: X = {9, 6, 14, 1,  8}, 
        Y = {2, 10, 3, 12, 11},
       Z = {15, 13, 5, 7, 4 } 
Output: 3 
Explanation : 
After rearranging the arrays X[], Y[] and Z[] as {1, 6, 8, 9, 14}, {3, 2, 10, 12, 11}, and 
{4, 7, 15, 13, 5} respectively. 
The increasing triplets are {1, 3, 4}, {8, 10, 15} and 
{9,12, 13} . 
Therefore, the total count of such triplets is 3 . 

*/


#include<iostream>
#include<queue>
#include<algorithm>
#include<bits/stdc++.h>
// #include<array>
using namespace std;
int countTriplet(int x[],int y[],int z[],int n)
{
    priority_queue<int, vector<int> , greater<int> > X;   
    priority_queue<int, vector<int> , greater<int> > Y;

    sort(x,n+1);

}
int main()
{
    int x[]={9,6,14,1,8},y[]={2,10,3,12,11},z[]={15,13,5,7,4};
    int n=5;
    int ans=countTriplet(x,y,z,n);




return 0;
}