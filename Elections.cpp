#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int idx,maX=-1,arr[n+2],num;
    for(int i=1;i<=n;i++)
    {
        arr[i] = 0;
    }
    for(int i=0;i<m;i++)
    {
        maX=-1;
        for(int j=1;j<=n;j++)
        {
            cin>>num;
            if(num>maX)
            {
                maX = num;
                idx = j;
            }
        }
        arr[idx]++;
    }
    int anmx=-1,andx;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>anmx)
        {
            anmx = arr[i];
            andx = i;
        }
    }
    cout<<andx<<endl;

    return 0;
}
