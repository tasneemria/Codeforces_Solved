#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int len,Nmatch=0;
    len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]!=t[i])
        {
            Nmatch++;
        }
    }
    if(Nmatch%2==1)
    {
        cout<<"impossible"<<endl;
    }
    else
    {
        int pos,cnt=0;
        for(int i=0;;i++)
        {
            if(cnt==Nmatch/2)
            {
                pos = i;
                break;
            }
            if(s[i]!=t[i])
                cnt++;

            cout<<s[i];
        }
        for(int i=pos;i<len;i++)
        {
            cout<<t[i];
        }
    }

    return 0;
}
