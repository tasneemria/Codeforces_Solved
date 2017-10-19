#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,inp;
    int cnt = 0;
    cin>>n;
    map<int,int> mp;
    int mx = 0;
    for(int i=0;i<2*n;i++)
    {
        cin>>inp;
        mp[inp]++;
        if(mp[inp]==1)
        {
            cnt++;
        }
        else if(mp[inp]==2)
        {
            cnt--;
        }
        if(mx<cnt)
            mx = cnt;
    }
    cout<<mx<<endl;

    return 0;
}
