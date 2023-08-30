#include<iostream>
// #include<bits/stdc++.h>
#include<stack>
using namespace std;
/*Given an array, print the Next Greater Element (NGE) for every element using stack.
Example:
Input: arr[] = [ 4 , 5 , 2 , 25 ]
Output:  
4      –>   5
5      –>   25
2      –>   25
25     –>   -1*/

int main()
{
    stack<int> st;
    int arr[]={5,3,2,10,6,8,1,4,12,7,4};
    int n=11;
    st.push(arr[0]);
    for(int i=1;i<n;)
    {
        while(arr[i]>st.top())
        {
            cout<<st.top()<<"->"<<arr[i]<<endl;
            st.pop();
            if(st.empty()){
            st.push(arr[i]);
            i++;
            }
        }
    
            st.push(arr[i]);
            i++;
    }  

return 0;

}