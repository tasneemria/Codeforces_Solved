#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    int cnt = 0,an = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]++;
                cnt++;
                an = max(an,cnt);
            }
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            mp.clear();
            cnt = 0;
        }
    }
    cout<<an<<endl;

    return 0;
}
