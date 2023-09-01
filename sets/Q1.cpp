#include<iostream>
#include<set>
#include<iterator>
using namespace std;
/*😊Find the total number of elements of the set container.*/
int main()
{
    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(500);
    s1.insert(20);
    s1.insert(30);
    s1.insert(49);
    cout<<"number of elemernt in the set is = "<<s1.size()<<endl;
    set<int> :: iterator it=s1.begin();
    for( it;it!=s1.end();it++)
    {
        cout<<*it<<" ";
    }

    s1.erase(s1.begin(),s1.end());
    

return 0;
}