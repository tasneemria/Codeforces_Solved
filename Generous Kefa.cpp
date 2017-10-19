#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]>k)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
