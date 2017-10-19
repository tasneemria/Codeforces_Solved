#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n+1],h[n+1];
    for(int i=1;i<=n;i++)
    {
        v[i] = 0;
        h[i] = 0;
    }

    for(int i=0;i<n*n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(h[a]==0 && v[b]==0)
        {
            h[a] = 1;
            v[b] = 1;
            cout<<i+1<<" ";
        }
    }

    return 0;
}
