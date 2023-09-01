/*Sort a given map in descending order based on values instead of keys in C++ STL.
Key value
1 6
2 8
6 3
8 2*/
#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;
int main()
{
    map<int, int> m;
    m.insert(pair(11, 2000000));
    m.insert(pair(12, 200000));
    m.insert(pair(14, 20000));
    m.insert(pair(45, 2000));
    m.insert(pair(100, 200));

    map<int, int> m1;
    for (auto it = m.begin(); it != m.end(); it++)
        m1[it->second] = it->first;
    for (auto it = m1.begin(); it != m1.end(); it++)
        cout << it->second << " " << it->first << endl;

    return 0;
}