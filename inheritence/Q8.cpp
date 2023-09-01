/*

Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.

*/

#include<iostream>
using namespace std;
class student
{
    private:
    int id,name;
    public:

};
class studentexam : public student
{
    protected: 
    int marks[6];   

};
class studentResult : public studentexam
{
    private:
    int percentage;
    public:
    
    void setMarks()
    {
        int i=0;
    cout<<"English:";
    cin>>marks[i++]; 
    cout<<"maths:";
    cin>>marks[i++];
    cout<<"Social science:";
    cin>>marks[i++];
    cout<<"Hindi:";
    cin>> marks[i++];
    cout<<"Marathi:";
    cin>>marks[i++];
    cout<<"Science:";
    cin>>marks[i++];
    cout<<"\nRecord Added\n";
    }

int getsum()
{

 int i=0,min=marks[0],sum=0;
 for(i=0;i<6;i++)
 {
      if( min>marks[i+1] ) 
      min=marks[i+1];  
 }
 for(int i =0; i<6 ; i++)
 sum=sum + marks[i];
 return sum-min;

}
   
    void display() 
    {
        int i=0;
        float percentage;
        cout<<"\n.....................................\n\n";
        cout<<"English :"<<marks[i++]<<endl;
        cout<<"Minimum marks="<<getsum()<<endl;
        cout<<"Math :"<<marks[i++]<<endl;
        cout<<"Social Science :"<<marks[i++]<<endl;
        cout<<"Hindi  :"<<marks[i++]<<endl;
        cout<<"Marathi  :"<<marks[i++]<<endl;
        cout<<"science and technology  :"<<marks[i++]<<endl;
        cout<<"Total = "<<getsum()<<"/500"<<endl;
        percentage=(getsum()*100)/500;
        cout<<"Percentage = "<<percentage<<endl;
        cout<<"\n......................................\n";
    }

};



int main()
{
    int n;
    cout<<"How many student :";
    cin>>n;
    studentResult S[n];
    for(int i=0;i<n;i++)
    {
        S[i].setMarks();
    }
    for(int i=0;i<n;i++)
    {
        S[i].display();
    }

return 0;
}