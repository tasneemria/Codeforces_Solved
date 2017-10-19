#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,r,c;
    map<int, int> mp;
    cin>>n>>m>>k;
    for(int i=1; i<=m; i++)
    {
        mp[i] = 10000000;
    }
    for(int i=0; i<n; i++)
    {
        cin>>r>>c;
        if(mp[r]>c)
            mp[r] = c;
    }
    int cnt=0;
    map<int,int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cnt+=it->second;
    }
    if(cnt<k)
        cout<<cnt<<endl;
    else
        cout<<k<<endl;

    return 0;
}
