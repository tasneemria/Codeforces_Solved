#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(c==0)
    {
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;
    }
    int diff = b-a;
    if((b-a)%c==0 && ((diff>0 && c>0) || (diff<0 && c<0)) ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
