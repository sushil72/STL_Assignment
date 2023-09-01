/*Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases*/
#include<iostream>
using namespace std;

class Item
{
    public:
    int Item_no, Price;
    string name;

};
class Discount_item : public Item
{
    public:
    int discount_percent;
    int discount_price;
    
    void get_data()
    {
        cout<<"Enter item name:";
        cin>>name;
        cin.ignore();
        cout<<"Enter item number:";
        cin>>Item_no;
        cin.ignore();

        cout<<"Enter Price :";
        cin>>Price;
        cin.ignore();

        cout<<"enter Discount percentage:";
        cin>>discount_percent;
        cin.ignore();

        discount_price = Price * discount_percent / 100;
    }
void display()
{
    cout<<"..................................................."<<endl;
    cout<<"Item name: "<<name<<endl;
    cout<<"Item numner : "<<Item_no<<endl;
    cout<<"Item Price: "<<Price<<endl;
    cout<<"Discount percentage :"<<discount_percent<<endl;
    cout<<"Discounted Price : "<<Price-discount_price<<endl;
    cout<<"..................................................."<<endl;
}

} ;
int main()
{
    int n,i,temp,total_price=0,Total_discount=0;
    cout<<"how many item you want to enter:"<<endl;
    cin>>n;
    Discount_item item[n];
    for(i=0;i<n;i++)
    {
        item[i].get_data();
        total_price+=item[i].Price;
        Total_discount+=item[i].discount_price;
    }
    cout<<"\n\n";
    for(i=0;i<n;i++)
    item[i].display();
    cout<<"\n";
    cout<<"...................................................."<<endl;
    cout<<"Total Price : "<<total_price<<endl;
    cout<<"Total Discount : "<<Total_discount<<endl;
    

return 0;
}