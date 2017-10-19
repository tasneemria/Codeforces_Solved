#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,n;
    cin>>p>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        x = x%p;
        mp[x]++;
        //cout<<x<<" "<<mp[x]<<endl;
        if(mp[x]>1)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
