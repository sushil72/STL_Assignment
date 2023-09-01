#include<iostream>
#include<map>
#include<iterator>
using namespace std;
//upper bound and lower bound 
int main()
{
    multimap<int,int> m;
    m.insert(pair<int,int> (1,10));
    m.insert(pair<int,int> (2,20));
    m.insert(pair<int,int> (3,30));
    m.insert(pair<int,int> (1,100));
    m.insert(pair<int,int> (4,40));
//when 1 is present multiple times 
    cout<<"Lower bound of 1 : "<<(m.lower_bound(1))->first<<" "<<(m.lower_bound(1))->second<<endl;
    //when 2 is present on etime 
    cout<<"Lower bound of 2 : "<< (m.lower_bound(2))->first<<" "<<(m.lower_bound(2))->second<<endl;
//when 5 is no tpresent in map 
    cout<<"Lower bound of 5 : "<< (m.lower_bound(5))->first<<" "<<(m.lower_bound(5))->second<<endl;

    /*upper bound */cout<<endl;
    //when 1 is present multiple times 
    cout<<"upper  bound of 1 : "<<(m.upper_bound(1))->first<<" "<<(m.upper_bound(1))->second<<endl;
    //when 2 is present on etime 
    cout<<"upper bound of 2 : "<< (m.upper_bound(2))->first<<" "<<(m.upper_bound(2))->second<<endl;
//when 5 is not present in map 
    cout<<"upper bound of 5 : "<< (m.upper_bound(5))->first<<" "<<(m.upper_bound(5))->second<<endl;

return 0;
}