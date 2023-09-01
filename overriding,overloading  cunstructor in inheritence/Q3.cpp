/*Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class*/
#include<iostream>
using namespace std;
class Animals{
    public:
   virtual void sound()
    {
        cout<<"animal sounds"<<endl;
    }

};
class dogs :public Animals
{
    public:
    void sound()
    {
         cout<<"Bhow bhow Bhow bhow"<<endl;
    }
};

int main()
{
    dogs d1;
    Animals a1;
    Animals *a=&d1;
    dogs *d=&d1;
a->sound();
    // d1.sound();
    // d->sound();
return 0;
}