#include<iostream>
#include<map>
#include<iterator>
/*Create a map, and insert some pairs and find one pair out of the inserted pair and
replace it with another pair and print map.*/
using namespace std;
int main()
{
    map<int,string> m1;
    m1.insert({1,"sushil"});
    m1.insert({2,"sandeep"});
    m1.insert({3,"amit"});
    m1.insert({4,"vivek"});
   auto it=m1.find(2);
   if(it!=m1.end())
   it->second="om";  
   m1[3]="susheeel";

   for(auto it=m1.begin();it!=m1.end();it++)
   cout<<it->first<<"  "<<it->second<<endl;
       
return 0;
}