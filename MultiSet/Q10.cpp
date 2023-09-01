/*Unlike a set, a multiset may contain multiple occurrences of same number. The
multiset equivalence problem states to check if two given multisets are equal or not.
For example let A = {1, 2, 3} and B = {1, 1, 2, 3}. Here A is set but B is not (1 occurs
twice in B), whereas A and B are both multisets. More formally, “Are the sets of pairs
defined as \(A' = \{ (a, frequency(a)) | a \in \mathbf{A} \}\)         equal for the two given
multisets?” Given two multisets A and B, write a program to check if the two multisets
are equal.*/
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{

multiset<int> A;
multiset<int> B;
A.insert(1);
A.insert(2);
A.insert(3);
B.insert(1);
B.insert(1);
B.insert(4);
B.insert(3);

/*This code is for finding it is set or not */
/*
for(auto it=A.begin();it!=A.end();)
if(A.count(*it) > 1)
{
    cout<<"\nA is not a  set "<<endl;
    return 0;
}
else
it++;

//checking ffor B also

for(auto it=B.begin();it!=B.end();)
if(B.count(*it) > 1)
{
    cout<<"\nB is not a set "<<endl;
    return 0;
}
else
it++;

cout<<" \nA abd B both are the sets \n";

*/

/*This is for to check the it is equal or not */
if(A.size()==B.size())
if(A==B)
cout<<"\nthe Set a and b is Equal \n";
else
{
    cout<<"\nA and B are not equal";
}
else
    cout<<"\nA and B are not equal";

return 0;
}