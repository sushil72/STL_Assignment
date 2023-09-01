/*
Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.
*/
#include<iostream>
using namespace std;
class person
{
    private:
    string name ; int age;
    public:
    person()
    {cout<<"Default is running in person class"<<endl;}
    person(string name , int age)
    {
        this->name=name;
        this->age=age;
    }
    string getname()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }


};
class student : public person
{
    int rank;
    public:
    student():person()
    {
        cout<<"Default is running in student class"<<endl;
    }
    student(string name, int age, int rank ) : person(name, age)
    {
        this->rank=rank;
    }

    void display()
    {
        cout<<"name ="<<getname()<<endl;
        cout<<"Age ="<<getAge()<<endl;
        cout<<"Rank = "<<rank<<endl;
    }

};
int main()
{
    student s1("sushil", 21,567);
    s1.display();

return 0;
}