#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> mp;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int paint = 0;
    map<int,int>::iterator it;
    int zero = 0,ans=0;
    //cout<<ans<<endl;
    while(1)
    {
        ans+=mp.size()-1-zero;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            it->second--;
            if(it->second==0) zero++;
        }
        if(zero==mp.size() || zero==mp.size()-1) break;
    }

    cout<<ans<<endl;

    return 0;
}
