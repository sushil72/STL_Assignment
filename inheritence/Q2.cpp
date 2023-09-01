#include<iostream>
using namespace std;

/*Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user in base class and display the sum of these two numbers in derived class.*/
   
class  base
{
    protected: 
    int a, b;
    
};

class derived : private base{
public:         
    void setData(int a, int b)
    {
        this->a=a;
        this->b=b;
    } 
void display()
{
cout<<"Sum="<<a+b<<endl;
}
};
       
int main()
{
derived d;
d.setData(5,5);
d.display();
return 0;
}