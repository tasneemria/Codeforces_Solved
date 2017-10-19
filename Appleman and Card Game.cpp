#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<char,long long> mp;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    map<char,long long>::iterator it;
    long long mn = INFINITY;
    long long coin=0;
    vector<long long> vct;
    for(it=mp.begin();it!=mp.end();it++)
    {
        //cout<<it->first<<" "<<it->second<<endl;
        vct.push_back(it->second);

//        if(k<=0) break;
//        mn = min(it->second,k);
//        coin+=(mn*mn);
//        k-=mn;
    }
    sort(vct.begin(),vct.end());
    reverse(vct.begin(),vct.end());
    for(int i=0;i<vct.size();i++)
    {
        //cout<<vct[i]<<endl;
        if(k<=0) break;
        if(k<vct[i]) mn = k;
        else mn = vct[i];
        coin+=(mn*mn);
        k-=mn;
    }

    cout<<coin<<endl;

    return 0;
}
