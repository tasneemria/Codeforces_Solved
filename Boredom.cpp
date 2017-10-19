#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,mx=0;
    cin>>n;
    long long arr[n+1],cntarr[100000];

    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
        if(mx<arr[i])
        {
            mx = arr[i];
        }
    }

    for(long long i=0;i<=mx;i++)
    {
        cntarr[i] = 0;
    }
    for(long long i=0;i<n;i++)
    {
        cntarr[arr[i]]++;
    }

    for(long long i=2;i<=mx;i++)
    {
        cntarr[i] = max(cntarr[i-1],cntarr[i-2]+cntarr[i]*i);
    }
    cout<<cntarr[mx]<<endl;

    return 0;
}
