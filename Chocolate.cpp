#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,one=0;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1) one++;
    }
    vector<int> vt;
    if(one==1) cout<<1<<endl;
    else if(one==0) cout<<0<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==1) vt.push_back(i);
        }
        long long div=1,diff;
        for(int i=0;i<vt.size()-1;i++)
        {
            diff = vt[i+1]-vt[i];
            div*=diff;
        }
        cout<<div<<endl;
    }

    return 0;
}
