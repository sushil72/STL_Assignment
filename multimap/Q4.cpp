/*You are given an array A of size N. You need to insert the elements of A into a
multimap(element as key and index as value) and display the results. Also, you need
to erase a given element x from the multimap and print "erased x" if successfully
erased, else print "not found".*/

#include<iostream>
#include<map>
#include<iterator>
using namespace std;

void display(multimap<int,int> m)
{
    cout<<"\n";
    // for(auto it=m.begin();it!=m.end();it++)
    // cout<<(*it).first<<" "<<(*it).second<<endl;
    for(pair<int,int> it : m)
    cout<<it.first<<" "<<it.second<<endl;
}

multimap<int , int>insertIntoMap(int arr[], int n)
{
    multimap<int,int> m;
    for(int i=0;i<n;i++)
    m.insert({arr[i],i});
    return m;
}

int main()
{
    multimap<int, int> map1;
    int arr[]={10,20,30,40,55,20,30};
    int n=7;
    map1=insertIntoMap(arr,n);
    display(map1);
    int x=20;
    if(map1.empty())
    cout<<"Empty "<<endl;
    else
{

    if(map1.count(20))
    {
        map1.erase(x);
        cout<<"Erased succesfully"<<endl;
        display(map1);
    }
}

return 0;
}