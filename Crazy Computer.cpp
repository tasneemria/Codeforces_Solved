#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,c;
    cin>>n>>c;
    long long t[n+1];
    for(long long i=0;i<n;i++)
    {
        cin>>t[i];
    }
    long long sum = 0;
    for(long long i=1;i<n;i++)
    {
        sum++;
        if(t[i]-t[i-1]>c)
        {
            sum = 0;
        }
    }

    cout<<sum+1<<endl;

    return 0;
}
