
/*Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:*/
#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    string address;
    int phone_no;
    

};

class Employee : public Person
{
    public:
    int eno;
    string empname;
};
class Manager : public Employee
{
    public:
    string designation ,name,department_name;
    int salary;
    
    void set_data()
    {
        
        cout<<"enter employee no.:";
        cin>>eno;
        cin.ignore();
        cout<<"Enter name:";
        cin>>name;
        cin.ignore();
        cout<<"Enter Address:";
        cin>>address;
        cin.ignore();
        cout<<"Enter phone number:";
        cin>>phone_no;
        cin.ignore();
        cout<<"enter Designation:";
        cin>>designation;
        cin.ignore();
        cout<<"enter Department name:";
        cin>>department_name;
        cin.ignore();
        cout<<"enter salary:";
        cin>>salary;
        

    }
    void display_data()
    {
        cout<<"\nEmployee Number: "<<eno;
        cout<<"\nName: "<<name;
        cout<<"\nAddress: "<<address;
        cout<<"\nPhone Number: "<<phone_no;
        cout<<"\nDesignation: "<<designation;
        cout<<"\nDepartment Name: "<<department_name;
        cout<<"\nSalary: "<<salary;

    }

};

int main()
{
    int n,i,temp=0;
    Manager m[100];

 cout<<"How many managers you want to enter:";
 cin>>n;
 
 cout<<"..................................."<<endl<<endl;
 for(i=0;i<n;i++){
    cout<<"Enter Details of the manager:"<<endl;
    m[i].set_data();

 }

 
 for(i=1;i<=n;i++){
    if(m[temp].salary<m[i].salary){
    temp=i;

    }
 }

 cout<<"\nManager with higher salari is : "<<m[temp].salary<<endl;
 cout<<" And His name is:"<<m[temp].name;

return 0;
}