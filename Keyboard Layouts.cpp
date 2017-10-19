#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s;
    cin>>s1>>s2>>s;
    map<char,char> mp;
    for(int i=0;i<s1.length();i++)
    {
        mp[s1[i]] = s2[i];
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            cout<<s[i];
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            char a = mp[s[i]+32]-32;
            cout<<a;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            cout<<mp[s[i]];
        }
    }

    return 0;
}
