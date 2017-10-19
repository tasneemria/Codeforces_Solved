#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    if(len==1)
    {
        if(s[0]=='4' || s[0]=='8' || s[0]=='0')
            cout<<4<<endl;
        else
            cout<<0<<endl;
    }
    else
    {
        int a = s[len-2]-48,b = s[len-1]-48;
        int calc = a*10+b;
        if(calc%4==0) cout<<4<<endl;
        else cout<<0<<endl;
    }

    return 0;
}
