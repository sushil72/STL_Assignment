/* 
10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include<iostream>
#include<cstring>
using namespace std;
class Worker{
   protected:
    int code ;
    char name[20];
    float salary;
    public:
    Worker(){}
    Worker(int c, char *n, float s)
    {
        code=c;
        strcpy(name,n);   
        salary=s;
    }
    void PrintW()
    {
        cout<<"Worker code: "<<code<<endl;
        cout<<"Worker name: "<<name<<endl;
	
    }
};

class officer {
   protected:
    float DA,HRA;
    public:
    officer(){}
    officer(float d, float h)
    {
        DA=d;
        HRA=h;
    }
    void PrintO()
    {
        cout<<"DA: "<<DA<<endl;
	    cout<<"HRA: "<<HRA<<endl;
    }
};
class manager : public Worker,officer
{
    float TA,gross_salary;
    public:
    manager(){

    }
    manager(int c, float s,char *n, float d, float h):Worker(c,n,s),officer(d,h)
    {}
    void printM()
    {
        PrintW();
        PrintO();
        cout<<"TA: "<<salary*0.10<<endl;
        gross_salary=TA+DA+HRA+salary;
        cout<<"gross Salary : "<< gross_salary;
    }

};
int main()
{
    int cnt;
    cout<<"enter number of manager:"<<endl;
    cin>>cnt;
    manager *m;
    m=new manager[cnt];  
 
    for(int i=0;i<cnt;i++)
    {
        cout<<"enter name :";
        char *n;
        cin>>n;
        cout<<"Enter code:";
        int c;
        cin>>c;
        cout<<"Enter salary";
        float s;
        cin>>s;
        cout<<"Enter DA";
        float d;
	cin>>d;
	cout<<"Enter HRA";
    float h;
    cin>>h;
    m[i]=manager(c,s,n,d,h);
    }
    for (int i = 0; i < cnt; i++)
    {
        m[i].printM();
    }
    
return 0;
}