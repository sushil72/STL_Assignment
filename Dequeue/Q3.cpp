/*Returns a reverse iterator which points to the position before the beginning of the
deque (which is considered its reverse end).*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq{12,13,44,56,77,88};
    
    for(auto it=dq.rbegin();it!=dq.rend();it++)
    cout<<*it<<" ";

    // C++ program to illustrate the
// deque::rend() function
	deque<char> dq = { 'a', 'b', 'c', 'd', 'e' };

	cout << "The deque in reverse order: ";

	// prints the elements in reverse order
	for (auto it = dq.rbegin(); it != dq.rend(); ++it)
		cout << *it << " ";

	return 0;
}

