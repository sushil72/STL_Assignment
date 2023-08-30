#include<iostream>
using namespace std;
#include<queue>
/*Schedule a interview by using applicant's reaching time using c++ STL*/
class Application
{
    public:
    string name;
    int time;
};
Application getEntry()
{
    Application app;
    cout<<"\n enter Applicant Name :";
    cin>>app.name;
    cout<<" \n enter Applicant Time :";
    cin>>app.time;
    return app;
}

int main()
{
        queue<Application> q;
        int n;
        cout<<"\nEnter umbe rof Applicant :";
        cin>>n;
        for(int i=0;i<n;i++)
        q.push(getEntry());


        while (!q.empty())
        {
            cout<<"Name: "<<q.front().name<<"\t";
            cout<<"Timing : "<<q.front().time<<endl;
            q.pop();
        }
        

return 0;
}