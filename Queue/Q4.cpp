/*Manage a queue for multiple input and store in ascending order of his first character*/
#include<iostream>
using namespace std;
#include<algorithm>
#include<queue>
void display(queue<string> q)
   {
    cout<<"\n";
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
   }

int main()
{
    queue<string> q;
    int choice;
    string str;
    while (choice)
    {
        cout<<"\n Enter a word ";
        cin>>str;
        q.push(str);
        cout<<"\nDo You want to Enter 1 for yes and 0 for no";
        cin>>choice;
    }
    int size=q.size();
    string temp[size];

   for(int i=0;i<size;i++)
   {
        temp[i]=q.front();
        q.pop();
   }

   sort(temp,temp+size);

   for(int i=0; i<size;i++)
   q.push(temp[i]);
    display(q);
   






return 0;
}