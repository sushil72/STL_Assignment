#include <iostream>
using namespace std;
template <class T>
class Hashtablee
{
    T a[100] = {0};

public:
    int hashFunction(T n)
    {
        return (n % 10);
    }
    void insert(T x)
    {
        int index = hashFunction(x);
        if (a[index] == 0)
            a[index] = x;
        cout<<"\ninserted\n";
    }
    int search(T x)
    {
        int index = hashFunction(x);
        if (a[index] == x)
            return 1;
        else
            return 0;
    }      
};

int main()
{
   int n, value,data;
    cout << "how many number you want to enter  :";
    cin >> n;
    Hashtablee <int>h;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        h.insert(data);
    }
        cout << "enter element to search :";
        cin >> value;
        if (h.search(value))
        cout << "element found"; 
        else
        cout << "element not found";

    return 0;
}
