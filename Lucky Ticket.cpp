#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f1=0,s1=0,f2=0,s2=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(s[i]=='4') f1++;
        else if(s[i]=='7') s1++;
    }

    for(int i=n/2;i<n;i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(s[i]=='4') f2++;
        else if(s[i]=='7') s2++;
    }

    if(s1==s2 && f1==f2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
