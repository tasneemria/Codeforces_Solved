#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        mp[str]++;
    }
    int maX = 0;
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        //cout<<it->first<<" "<<it->second<<endl;
        if(maX<it->second)
        {
            maX = it->second;
        }
    }
    cout<<maX<<endl;

    return 0;
}
