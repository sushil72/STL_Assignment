/*
8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. 
So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers
*/


#include<iostream>
using namespace std;
class customer{
    string name;
    int phone_number;
    public:
    void setName()
    {
        cout<<"Enter name: ";
        cin>>name;
    }

    void display()
    {
        cout<<"\n..................................\n";
        cout<<"Name :"<<name<<endl;
        cout<<"Phone Number : "<<phone_number<<endl;
    } 
};

class depositor : public customer
{
    int accno;
    float balance;
    public:
    void setdataD()
    {
        cout<<"enter Account Number:";
        cin>>accno;
        cout<<"enter balance: ";
        cin>>balance;
    }
    void displayD()
    {
        cout<<"\n....................................\n";
        cout<<"Account Number : "<<accno<<endl;
        cout<<"Balanace : "<<balance<<endl;
    }
};
class borrower : public depositor
{
    int loan_no;
    float loan_amt;
    public:
    void setdataB()
    {
        cout<<"\nenter loan number :  ";
        cin>>loan_no;
        cout<<"enter Loan amount :";
        cin>>loan_amt;
    }
    void displayB()
    {
        cout<<"\n Loan number :"<<loan_no<<endl;
        cout<<"\nLoan Amount : "<<loan_amt<<endl;
        cout<<"\n..............................................\n";
    }
};
int main()
{
    borrower *b1;
    int n,i;
    cout<<"\nEnter no. of customer Details you want : ";
    cin>>n;
    b1=new borrower[n];
    for(int i=0;i<n;i++)
    {
        b1[i].setName();
        b1[i].setdataD();
        b1[i].setdataB();
    }
    for(i=0 ; i < n ;i++)
    {
        b1[i].display();
        b1[i].displayD();
        b1[i].displayB();
    }
return 0;
}