#include<bits/stdc++.h>
using namespace std;

int eight(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='8') return 1;
    }
    return 0;
}

int main()
{
    long long a;
    cin>>a;
    string str;
    for(int i=1;;i++)
    {
        a++;
        str = to_string(a);
        //cout<<str<<endl;
        if(eight(str)==1)
        {
            cout<<i<<endl;
            return 0;
        }
    }

    return 0;
}
