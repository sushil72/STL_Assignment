#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
C++ Program to give two arrays with size n, maximise the first array by using the
elements from the second array such that the new array formed contains n greatest
but unique elements of both the arrays giving the second array priority (All elements
of second array appear before first array). The order of appearance of elements is
kept the same in output as in input.
Examples:
Input : arr1[] = {2, 4, 3}
arr2[] = {5, 6, 1}
Output : 5 6 4
As 5, 6 and 4 are maximum elements from two arrays giving the second array
higher priority. Order of elements is the same in output as in input.
Input : arr1[] = {7, 4, 8, 0, 1}
arr2[] = {9, 7, 2, 3, 6}
Output : 9 7 6 8
*/

void maximize(vector<int> arr1, vector<int> arr2)
{
    vector<int> v;
    for (int i = 0; i < arr1.size(); i++)
    {
        v.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        v.push_back(arr2[i]);
    }
    /// sorting
    sort(v.begin(), v.end(), greater<int>());
    cout << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    unordered_set<int> s;
    for (int i = 0; i < 5; i++)
        s.insert(v[i]);
    // finalize the answer
    v.clear();
    for (int i = 0; i < arr2.size(); i++)
    {
        if (s.find(arr2[i]) != s.end())
        {
            v.push_back(arr2[i]);
            s.erase(arr2[i]);
        }
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        if (s.find(arr1[i]) != s.end())
        {
            v.push_back(arr1[i]);
            s.erase(arr1[i]);
        }
    }
    cout << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
int main()
{
    vector<int> arr1 = {7, 4, 8, 0, 1};
    vector<int> arr2 = {9, 7, 2, 3, 6};
    maximize(arr1, arr2);

    return 0;
}