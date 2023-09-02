/* Given an integer array nums , return an array answer such that answer[i] is equal to
the product of all the elements of nums except nums[i] .*/

#include <iostream>
using namespace std;
#include <array>
array<int, 5> nums{2, 3, 5, 5, 1};
    array<int, 5> answer;
void method1()
{
    int i, j;
    for (i = 0; i < nums.size(); i++)
    {
        answer[i] = 1;
        for (j = 0; j < nums.size(); j++)
        {
            if (i == j)
                continue;
            else
                answer[i] = answer[i] * nums[j];
        }
    }

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
}

void method2()
{
    // time complexity=o(n);
    int mul=1,temp;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
        temp=i;
        continue;
        }
        else
        mul=mul*nums[i];
    }
    
    for(int j=0;j<nums.size(); j++)
    {
        if(nums[temp]==0)
        {
            answer.fill(0);
            answer[temp]=mul;
            break;
        }else
        answer[j]=mul/nums[j];
    }

    for(int i=0;i<answer.size();i++)
    cout<<answer[i]<<" ";
}

int main()
{
    method2();
    
    return 0;
}