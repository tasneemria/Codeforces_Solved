#include<iostream>
using namespace std;

int main()
{
    long long n,miN=99999999999,maX=-2;
    cin>>n;
    long long b[n];
    for(long long i=0;i<n;i++)
    {
        cin>>b[i];
        if(miN>b[i])
            miN = b[i];
        if(maX<b[i])
            maX = b[i];
    }
    long long cmin=0,cmax=0;
    for(long long i=0;i<n;i++)
    {
        if(b[i]==miN)
            cmin++;
        if(b[i]==maX)
            cmax++;
    }
    if(miN==maX)
    {
        cout<<0<<" ";
        long long sum = (n*(n-1))/2;
        cout<<sum;
    }
    else
        cout<<maX-miN<<" "<<cmin*cmax<<endl;

    return 0;
}
