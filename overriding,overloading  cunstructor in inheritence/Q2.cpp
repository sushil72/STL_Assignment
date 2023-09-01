#include<iostream>
using namespace std;
class Rectangle
{
    float length,bredth;
    public:
    Rectangle(float length, float bredth)
    {
        this->length=length;
        this->bredth=bredth;
    }
    
    float area()
    {
        return(length*bredth);
    }
    
    
};

int main()
{

Rectangle r(10.5 , 20.5);
  
Rectangle r(6,2);
cout<<"Area of the rectangle ="<<r.area();

return 0;
}