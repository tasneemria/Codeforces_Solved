#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string home;
    cin>>home;
    string s1,s2;
    vector<string> out;
    map<string,int> mp;
    vector<string> in;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        s1 = s.substr(0,3);
        s2 = s.substr(5,3);
        if(s1==home)
        {
            out.push_back(s2);
        }
        else
        {
            in.push_back(s1);
        }
    }
    vector<string>::iterator it;
    for(it=out.begin(); it!=out.end(); it++)
    {
        mp[*it]++;
    }
    for(it=in.begin(); it!=in.end(); it++)
    {
        mp[*it]--;
    }
    for(it=out.begin(); it!=out.end(); it++)
    {
        if(mp[*it]>0)
        {
            cout<<"contest"<<endl;
            return 0;
        }
    }

    cout<<"home"<<endl;

    return 0;
}
