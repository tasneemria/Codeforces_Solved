#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    char ch;
    int open=0,close=0,sum=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(')
        {
            open++;
        }
        else if(str[i]==')')
        {
            if(open>0)
                open--;
            else
            {
                sum++;
            }
        }
    }
    cout<<str.length()-sum-open<<endl;

    return 0;
}
