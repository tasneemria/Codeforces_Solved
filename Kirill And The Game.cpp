#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    long long ans;
    for(int i=x;i<=y;i++)
    {
        ans = i*k;
        if(ans>=l && ans<=r)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
