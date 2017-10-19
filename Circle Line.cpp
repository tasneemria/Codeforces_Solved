#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d[n+1];
    int total=0,mn,mx,part=0;
    for(int i=1;i<=n;i++)
    {
        cin>>d[i];
        total+=d[i];
    }
    int a,b;
    cin>>a>>b;
    mn = min(a,b);
    mx = max(a,b);
    if(mn==mx) cout<<0<<endl;
    else
    {
        for(int i=mn;i<mx;i++) part+=d[i];
        total-=part;
        if(total>part) cout<<part<<endl;
        else cout<<total<<endl;
    }

    return 0;
}
