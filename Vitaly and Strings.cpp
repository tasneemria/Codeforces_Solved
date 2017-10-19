#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int pos;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<t[i])
        {
            pos = i;
            break;
        }
    }
    for(int i=pos;i;)
    {

    }

    return 0;
}
