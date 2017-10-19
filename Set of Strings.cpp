#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> vt;
    map<char,int> mp;
    char ch = 'a';
    for(i=0;i<26;i++)
    {
        //cout<<ch<<endl;
        mp[ch] = 0;
        ch++;
    }
    int cnt = 0;
    for(i=0;i<s.length();i++)
    {
        if(mp[s[i]]==0)
        {
            mp[s[i]] = 1;
            vt.push_back(i);
            cnt++;
        }
    }

    vt.push_back(s.length());
    if(cnt<n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        string str;
        cout<<"YES"<<endl;
        for(i=0;i<n-1;i++)
        {
            str = s.substr(vt[i],vt[i+1]-vt[i]);
            cout<<str<<endl;
        }
        str = s.substr(vt[i],vt[vt.size()-1]-vt[i]);
        cout<<str<<endl;
    }


    return 0;
}
