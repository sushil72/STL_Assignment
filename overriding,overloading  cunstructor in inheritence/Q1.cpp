/*
Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT
*/
#include<iostream>
using namespace std;
class FLOAT
{
    private:
    float x;
    public:
    FLOAT(){}
    FLOAT(float x)
    {
        this->x=x;
    }
    float operator+(FLOAT a)
    {
        return x+a.x;
    }
    float operator-(FLOAT a)
    {
        return x-a.x;
    }
    float operator*(FLOAT a)
    {
       return x*a.x;
    }
    float operator/(FLOAT a)
    {
        return x/a.x;
    }
    void display()
    {
        cout<<"result="<<x<<endl;
    }
    };

int main()
{
    FLOAT f1,f3,f2;
    f1=5;
    f2=10;
    f3=f1.operator+(f2);
    f3.display();
    f3=f1-f2;
    f3.display();
    f3=f1*f2;
    f3.display();
    f3=f1/f2;
    f3.display();
return 0;
}