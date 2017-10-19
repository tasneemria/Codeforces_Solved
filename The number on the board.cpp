#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k;
    cin>>k;
    string s;
    cin>>s;
    char ch[s.length()];
    long long sum = 0,ans=0;
    for(int i=0;i<s.length();i++)
    {
        sum+=(s[i]-48);
        ch[i] = s[i];
    }
    sort(ch,ch+s.length());
//    for(int i=0;i<s.length();i++) cout<<ch[i];
//    cout<<endl;
    if(sum>=k)
    {
        cout<<0<<endl;
    }
    else
    {
        long long mn,diff;
        k = k-sum;
        for(int i=0;i<s.length();i++)
        {
            if(k==0) break;
            diff = '9' - ch[i];
            mn = min(k,diff);
            ans++;
            //cout<<mn<<endl;
            k-=mn;
        }
        cout<<ans<<endl;
    }


    return 0;
}
