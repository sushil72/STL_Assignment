/*
10.Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.
 */ 



#include<iostream>
using namespace std;
class Player
{
    int player_no,number_of_matches;
    string name;
     int *goals= new int[number_of_matches];
    public:
    Player(int player_no,string name,int number_of_matches)
    {
        this->player_no=player_no;
        this->name=name;
        this->number_of_matches=number_of_matches;
       
       for(int i=0;i<number_of_matches;i++)
       {
        cout<<"Enter the number of goals scored by "<<name<<" in "<<i+1<<"match"<<endl;
        cin>>goals[i];
       }


    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Player number :"<<player_no<<endl;
        cout<<"number of matches: "<<number_of_matches<<endl;
        cout<<"\t\tnumber of goals :"<<endl;
        for(int i=0;i<number_of_matches;i++)
       {
        cout<<"goals scored by "<<name<<" in "<<i+1<<"  match  :";
        cout<<goals[i]<<endl;
       }
    }
    
} ;
int main()
{
    Player p(11,"MS Dhoni",3);
    p.display();

return 0;
}