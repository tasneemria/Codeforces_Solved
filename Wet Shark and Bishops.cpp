#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    pair<int,int> pr;
    for(int i=1;i<=1000;i++)
    {
        pr = make_pair(i,i);
        mp[pr] = 0;
    }
    for(int i=1,j=1000;i<=1000;i++,j--)
    {
        pr = make_pair(i,j);
        mp[pr] = 0;
        //mp[make_pair(i,j)] = 0;
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[make_pair(a,b)] = 1;
        cout<<mp[make_pair(a,b)]<<endl;
    }
    long long cnt = 0,cnt2 = 0;
    for(int i=1,j=1000;i<=1000;i++,j--)
    {
        cnt+=(long long)mp[make_pair(i,i)];
        cnt2+=(long long)mp[make_pair(i,j)];
    }

    cnt = (cnt*(cnt-1))/2;

    cout<<cnt2<<endl;
    cnt2 = (cnt2*(cnt2-1))/2;
    cout<<cnt2<<endl;
    cout<<cnt+cnt2<<endl;


    return 0;
}
