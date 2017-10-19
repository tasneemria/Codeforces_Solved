#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+2],l[m+2],calc[n+2];
    map<int,int> mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=n;i>0;i--)
    {
        mp[a[i]]++;
        if(mp[a[i]]>1)
        {
            calc[i] = cnt;
        }
        else if(mp[a[i]]==1)
        {
            cnt++;
            calc[i] = cnt;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>l[i];
    }
    for(int i=1;i<=m;i++)
    {
        cout<<calc[l[i]]<<endl;
    }

    return 0;
}
