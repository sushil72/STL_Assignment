/*Create a railways ticket counter and allot ticket to first come first take using c++ STL*/
#include<iostream>

using namespace std;
#include<queue>
class Ticket
{
    public:
    int prn;
    string name;
    string source ,destination;
};

Ticket getticket()
{
    Ticket psngr;
    cout<<"enter name of the passenger : ";
    cin.ignore();
    getline(cin,psngr.name);
    cout<<"\n Enter Source Station";
    cin.ignore();
   getline(cin,psngr.source); // cin>>psngr.source(); 
    cout<<"\nEnter destination : ";
    cin.ignore();
    
    getline(cin,psngr.destination);
    //cin>>psngr.destination();
    srand(time(NULL));
    cin.ignore();
    psngr.prn=rand();
    return psngr;
}

void showticket(queue<Ticket> q)
{
    
   while(!q.empty())
   {
    cout<<q.front().name<<"\n";
    cout<<q.front().source<<"\t";
    cout<<q.front().destination<<"\t";
    cout<<q.front().prn<<"\t";

    q.pop();
   }
    
}

int main()
{
    queue<Ticket> q;
    int n;
    cout<<"\nHow many passengers ? :";
    cin>>n;
    for(int i=0;i<n;i++)
    q.push(getticket());
    showticket(q);
return 0;
}