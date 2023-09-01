/*Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task
is to print the new string without ‘#‘. String after processing backspace characters
using deque
Examples:
Input : S = "abc#de#f#ghi#jklmn#op#"
Output : abdghjklmo
Input : S = "##iNeuron##Education##hub#"
Output : iNeurEducatihu*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string Solution(string s)
{
    deque<char> X;
    string temp="";
    for(int i=0;i<s.size();i++)
    {
       while(s[0]=='#')
       {
        s.erase(s.begin());
       }
        if(s[i]=='#')
        {
            X.pop_back();
            temp.pop_back();
        }
        else
        {
            X.push_back(s[i]);
              temp+=s[i];
        }
    }
    return temp;
}
int main()
{
    string s="abc#de#f#ghi#jkl#mn#op#";
    string s2="##iNeuron##Education##hub#";

    string Sol=Solution(s2);
    cout<<Sol;
return 0;
}