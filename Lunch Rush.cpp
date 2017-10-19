#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long mx = -INFINITY;
    long long f[n],t[n],result[n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i]>>t[i];
        if(t[i]>k)
        {
            result[i] = f[i]-(t[i]-k);
        }
        else
        {
            result[i] = f[i];
        }
        if(mx<result[i]) mx = result[i];
    }

    cout<<mx<<endl;

    return 0;
}
