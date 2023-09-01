/*Write a program to Copy one vector’s elements to another vector.*/
//Write a program to Copy one vector’s elements to another vector. ?
#include<iostream>
#include<vector>

using namespace std;
int main()
{

    vector <int> v1{1,2,3,4,5};
    vector <int> v2;
    v2=v1; // metod 1
    v1.assign(v2.begin(),v2.end()); // method 2 there are few more method 
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}