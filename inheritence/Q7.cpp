/*

Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).

Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.

*/

#include <iostream>
using namespace std;
class Employee
{
public:
    int emp_code;
    string name;

public:
    void setdata()
    {
        cout << "enter name of the Employee:";
        cin >> name;
        cout << "enter Employee code: ";
        cin >> emp_code;
    }
    int getEmpCode()
    {
        return emp_code;
    }
    string getName()
    {
        return name;
    }

    void display()
    {
        cout << "Emloyee name : " << name << endl;
        cout << "Employee Code : " << emp_code << endl;
    }
};

class FullTime : public Employee
{
public:
    /*daily rate, number of days, salary*/
    int daily_rate, no_of_days;
    float salary;

public:
    Employee E;
    void setdata()
    {

        E.setdata();
        cout << "enter FullTime Daily Rate: ";
        cin >> daily_rate;
        cout << "Enter number of Days: ";
        cin >> no_of_days;
    }

    void display()
    {
        cout << "\n.................................\n";
        E.display();
        cout << "Full time daily Rate :" << daily_rate << endl;
        cout << "number of Days :" << no_of_days << endl;
        cout << "Employee Salary :" << no_of_days * daily_rate << endl;
        cout << "Status : Fulltime" << endl;
    }
};

class PartTime : public Employee
{
public:
    /*number of working hours, hourly rate, salary)*/
    int no_of_hours, hourly_rate;
    float salary;
    Employee E;
    void setData()
    {
        E.setdata();
        cin.ignore();
        cout << "Enter no of hours: ";
        cin >> no_of_hours;
        cout << "enter Hourly rate ";
        cin >> hourly_rate;
    }

    void display()
    {
        cout << "\n...................................\n";
        E.display();
        cout << "Number of hours of the Employee:" << no_of_hours << endl;
        cout << "Number of Hourly Rate :" << hourly_rate << endl;
        cout << "Employee Salary :" << no_of_hours * hourly_rate << endl;
        cout << "\n...................................\n";
    }
};
int main()
{

    FullTime ft[100];
    PartTime pt[100];
    int f = 0, p = 0, n;
    int empcode, ch;
    while (true)
    {
        cout << "1.Enter Record\n";
        cout << "2.Display Record\n";
        cout << "3.Search Record\n";
        cout << "4.Quit\n";
        cin >> ch;
        switch (ch)
        {

        case 1:
            /* code */
            cout << "1.Full Time:" << endl;
            cout << "2.Part Time :";
            cin >> n;
            switch (n)
            {
            case 1:
                ft[f].setdata();
                f++;
                break;
            case 2:
                pt[p].setData();
                p++;
                break;
            default:
                cout << "You've not entered any option:" << endl;
                break;
            }
            break;
        case 2:
            cout << "1.Full Time:" << endl;
            cout << "2.Part Time :";
            cin >> n;
            switch (n)
            {
            case 1:
                for (int i = 0; i < f; i++)
                {
                    ft[i].display();
                }
                break;
            case 2:
                for (int i = 0; i < p; i++)
                {
                    pt[i].display();
                }
                break;
            default:
                cout << "Someting Went Wrong" << endl;
            }
            break;
        case 3:
            cout << "enter employee number:";
            cin >> empcode;
            for (int i = 0; i <(f + p); i++)
            {
                if (ft[i].emp_code==empcode)
                {
                    ft[i].display();
                }
                if (empcode == pt[i].getEmpCode())
                    pt[i].display();
                else
                    cout << "Record doesn't exit" << endl;
            }
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}
