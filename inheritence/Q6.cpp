/*Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).*/
class B;
#include<iostream>
using namespace std;
class A
{
    private:
    int x=10;
    public:
    void friend swap(A &a , B &b );

    void displa()
    {
        cout<<"x="<<x<<endl;
    }

};


class B 
{
    private:
    int y=20;
    public:
    void friend swap(A &a, B &b );
    void displa()
    {
        cout<<"y="<<y<<endl;
    }

};
void swap(A &a, B &b)   
{
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;

}
int main()
{
    A a; B b;
    swap(a, b);
    a.displa();
    b.displa();
    
return 0;
}