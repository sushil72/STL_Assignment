/*Create a function to search an element in the set */
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int search(int n, set<int> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        if (*it == n)
            return 1;
    return 0;
}
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    if (s.find(3)!=s.end())
    {
        cout << "\nElement Present in Set ";
    }
    else
        cout << " \nElement is not present in the set ";
    return 0;
}