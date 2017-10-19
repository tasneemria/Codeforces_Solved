#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0; i<s.length(); i++)
    {
        mp[s[i]] = 0;
    }
    for(int i=0; i<s.length(); i++)
    {
        mp[s[i]]++;
    }

    map<char,int>::iterator it;
    int flag = 0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        int st = it->second;
        if(st%k!=0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            it->second = (it->second)/k;
        }
        for(int i=0; i<k; i++)
        {
            for(it=mp.begin(); it!=mp.end(); it++)
            {
                for(int j=0;j<(it->second);j++)
                {
                    cout<<it->first;
                }
            }
        }
    }

    return 0;
}
