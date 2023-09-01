#include<iostream>
using namespace std;

/*Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary*/

class person
{
    protected :
    string name;
    int age;
    public :
    void setName()
    {
        cout<<"enter Your name:";
        cin.ignore();
        getline(cin,name);

    }
    void setAge()
    {
        cout<<"Enter your age:";
        cin>>age;
    }

    string getName()
    {
        return (name);
    }
    int getAge()
    {
        return age;
    }
};

class employee : public person
{
    private: 
    int empid;
    int salary;
    public:
     void setEmpId()
    {
        cout<<"enter Your employee id:";
        cin>>empid;
    }
    void setSalary()
    {
        cout<<"Enter your salary:";
        cin>>salary;
    }

    int  getEmpid()
    {
        return (empid);
    }
    int getSalary()
    {
        return salary;
    }
    void display()
    {
        cout<<"\n Employee id: "<<getEmpid()<<"\n Employee salary: "<<getSalary()<<endl;
            }
};
int main()
{
employee *E;
E=new employee;
E->setEmpId();         
return 0;
}