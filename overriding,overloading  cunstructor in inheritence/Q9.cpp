/*Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.
*/
#include<iostream>
using namespace std;
class AreaOFshapes{
    private:
    float Atri,Acircle,Arectangle;
    public:
    AreaOFshapes(){}
    AreaOFshapes(double length, float bredth)
    {
        Arectangle=length*bredth;
        cout<<"Area of rectangle is = "<<Arectangle<<endl;
    }
    AreaOFshapes(float radius)
    {
        Acircle=3.14*radius*radius;
        cout<<"Area of circle is = "<<Acircle<<endl;
    }
    AreaOFshapes(int base , int height)
    {
        Atri=0.5*base*height;
        cout<<"Area of the triangle ="<<Atri<<endl;
    }
};
int main()
{
    AreaOFshapes obj1(25.50,20.2);
    AreaOFshapes obj2(10.8);
    AreaOFshapes obj3(10,20);    

return 0;
}