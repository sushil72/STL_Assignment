/*Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading*/
#include<iostream>
using namespace std;

class Addition
{
    
    public:
    int add(int a, int b)
    {
          return(a+b);    
    }
    float add(float a, float b)
    {
        return(a+b);
    }
    double add(double a, double b)
    {
        return(a+b);
    }
    double add(double a , int b)
    {
        return(a+b);
    }

    float add(float a, int b)
    {
        return(a+b);
    }


};
int main()
{
    Addition obj;
    cout<<"Addition of integer="<<obj.add(3,4)<<endl;
    cout<<"Addition of float="<<obj.add(3.5,4.3)<<endl;
    cout<<"Addition of double="<<obj.add(30.2,10.5)<<endl;
    cout<<"Addition of double and int ="<<obj.add(30.2,10)<<endl;
    cout<<"Addition of float and int ="<<obj.add(3.2,10)<<endl;

return 0;
}