/*find factoriel using copy constructor*/
#include<iostream>
using namespace std;
class fact{
    int n,facto=1;
    public:
    fact(int n){
        this->n=n;

    }
    fact(fact &f){
        this->n=f.n;

    }
    void calculate()
    {
        int i;
        for(i=1;i<=n;i++)
        {
            facto=facto*i;
        }

    }
    void display()
    {
        cout<<"factoriel ="<<facto<<endl;
    }
};
int main()
{
    fact f1(6);
    f1.calculate();
    f1.display();

    fact f2=fact(f1);
    f2.calculate();
    f2.display();
return 0;
}