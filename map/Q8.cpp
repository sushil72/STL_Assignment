/*Given a string s of length N, containing digits written in words but in jumbled form, the
task is to find out the digits present in the string in word form and arrange them in
sorted order using map
Example:
Input:  s = “ozerotwneozero”
Output: 0012
Explanation: The string can be arranged as “zerozeroonetwo”.
Therefore the digits are 0, 0, 1 and 2*/
#include <iostream>
#include <map>
#include <iterator>

using namespace std;
void display(map<char, int>);
// function to find digits present int sting
string findNumbers(string s, int N)
{
    // store the final answer
    string ans;
    map<char, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[s[i]]++;
    }
    
    while(mp['z'] && mp['e'] && mp['r'] && mp['o'])
    {
        mp['z']--;
        mp['e']--;
        mp['r']--;
        mp['o']--;
        ans+='0';
    }
     while(mp['o'] && mp['n'] && mp['e']  )
    {
        mp['o']--;
        mp['n']--;
        mp['e']--;
       
        ans+='1';
    }

 while(mp['t'] && mp['w'] && mp['o']  )
    {
        mp['t']--;
        mp['w']--;
        mp['o']--;
       
        ans+='2';
    }

     while(mp['t'] && mp['h'] && mp['r'] && mp['e'] && mp['e'] )
    {
        mp['t']--;
        mp['h']--;
        mp['r']--;
        mp['e']--;
        mp['e']--;
       
        ans+='3';
    }
     while(mp['f'] && mp['o'] && mp['u'] && mp['r'])
    {
        mp['f']--;
        mp['o']--;
        mp['u']--;
        mp['r']--;
        ans+='4';
    }
     while(mp['f'] && mp['i'] && mp['v'] && mp['e'])
    {
        mp['f']--;
        mp['i']--;
        mp['v']--;
        mp['e']--;
        ans+='5';
    }
     while(mp['s'] && mp['i'] && mp['x'] )
    {
        mp['s']--;
        mp['i']--;
        mp['x']--;
        
        ans+='6';
    }
     while(mp['s'] && mp['e'] && mp['v'] && mp['e'] && mp['n'])
    {
        mp['s']--;
        mp['e']--;
        mp['v']--;
        mp['e']--;
        mp['n']--;
        ans+='7';
    }
    while(mp['e'] && mp['i'] && mp['g'] && mp['h'] && mp['t'])
    {
        mp['e']--;
        mp['i']--;
        mp['g']--;
        mp['h']--;
        mp['t']--;
        ans+='8';
    }
    while(mp['n'] && mp['i'] && mp['n'] && mp['e'])
    {
        mp['n']--;
        mp['i']--;
        mp['n']--;
        mp['e']--;
        ans+='9';
    }
    return ans;
}
void display(map<char, int> m)
{
    // for(auto it=m.begin();it!=m.end() ; it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
}
int main()
{
    string s = "otnhetwereo";
    string s1 = findNumbers(s, s.size());
    cout<<endl;
    cout<<s1;
    return 0;
}