#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    map<int,int> mp;
    int exist = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int mx=100;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            exist = 1;
            mx = i;
            break;
        }
    }

    if(exist==0)
    {
        cout<<1<<endl;
        return 0;
    }

    if(mx>x)
    {
        cout<<1<<endl;
        return 0;
    }
    if(mx==x)
    {
        cout<<0<<endl;
        return 0;
    }

    int insrt = x-mx;
    for(int i=mx+1;i<x;i++)
    {
        if(mp[i]>=1) insrt--;
    }
    cout<<insrt<<endl;

    return 0;
}
