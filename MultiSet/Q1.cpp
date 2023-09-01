#include<iostream>
#include<set>
using namespace std;

multiset<int> :: iterator fun()
{
    int arr[]={14,10,15,11,10};
        multiset<int> ms;
        multiset<int> s(arr,arr+5);
        // cout<<"The First element is :"<<*(s.begin());
        //displaying all the elements in the 
        cout<<"\n elements in the set is : ";
        for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
        //printing size of the set
        cout<<"\n total number of elements in the multiset is : "<<s.size()<<endl;
        // maximum size of the set
        cout<<"maximum elements in the set is : "<<s.max_size();
        
        // Erasing the element from set
        // s.erase(10);  // erase all the 10 from set 
        s.erase(s.find(10)); // erase only single one  

        cout<<"\n elements after erasing : "<<endl;
        for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
        // return ning the last index of the set 
        return --s.end(); 
}
  main()
{
    auto it = fun();

    cout<<"\n last iterator element : "<<*it;
return 0;
}