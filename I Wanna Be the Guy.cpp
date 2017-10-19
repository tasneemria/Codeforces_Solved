#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=1;i<=n;i++)
    {
        mp[i] = 0;
    }
    int num,a,b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>num;
        mp[num] = 1;
    }
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>num;
        mp[num] = 1;
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }

    cout<<"I become the guy."<<endl;

    return 0;
}
