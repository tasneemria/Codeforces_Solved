#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int mx,mn;
    mx = max(a,b);
    mn = min(a,b);
    if(s[mn-1]==s[mx-1])
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }

    return 0;
}
