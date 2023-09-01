/*Check if given Strings can be made equal by inserting at most 1 String using deque.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSimilar(string s1, string s2)
{
    int size1 = s1.size();
    int size2 = s2.size();
    if (size1 == size2)
    {
        if (s1 == s2)
            return true;
        return false;
    }

    deque<string> X;
    deque<string> y;
    string temp = "";

    // stroing words from s1 in the x deque

    for (int i = 0; i < size1; i++)
    {
        if (s1[i] == ' ')
        {
            X.push_back(temp);
            temp = "";
        }
        else
            temp += s1[i];
    }

    // / storing words of the s2 in y deque
    temp = "";
    for (int i = 0; i < size2; i++)
    {
        if (s2[i] == ' ')
        {
            y.push_back(temp);
            temp = "";
        }
        else
            temp += s2[i];
    }
    while (X.size() > 0 && y.size() > 0 && X.front() == y.front())
    {
        X.pop_front();
        y.pop_front();
    }

    while (X.size() > 0 && y.size() > 0 && X.back() == y.back())
    {
        X.pop_back();
        y.pop_back();
    }

    if (X.size() == 0 || y.size() == 0)
        return true;

    return false;
}
int main()
{
    string s1 = "Start practicing on GeeksforGeeks", s2 = "Start GeeksforGeeks";
    string temp = "";

    bool ans = isSimilar(s1, s2);
    if(ans)
    cout<<"True";else
    cout<<"false";
    return 0;
}