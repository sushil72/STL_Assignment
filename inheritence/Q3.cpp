/*Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.*/

#include<iostream>
using namespace std;
class base
{
    protected:
    int marks1,marks2,marks3;
    public:
    void setmarks()
    {
     cout<<"enter three subjects marks:";
     cin>>marks1>>marks2>>marks3;   
    }

};
class Total : public base               
{
   protected: 
    int Total; 
    public:
    void total()
    {
        Total=marks1+marks2+marks3;
    }
    
};
class Percentage : public Total      
{
    private:
    float per;
    public:
    void CalPercentage()
    {
        per=(Total* 100.0 ) / 300.0;         
    }
    void display()
    {

        cout<<"Percentage="<<per<<endl;
    }
};
int main()
{
 Percentage S;
 S.setmarks();
 S.total();
 S.CalPercentage();
 S.display();
return 0;
}