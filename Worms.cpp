#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n+1],consum[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    consum[0] = a[0];
    for(int i=1;i<n;i++)
    {
        consum[i] = consum[i-1]+a[i];
    }
    int m;
    cin>>m;
    long long q;
    for(int i=0;i<m;i++)
    {
        cin>>q;
        q = lower_bound(consum,consum+n,q)-consum;
        cout<<q+1<<endl;
    }

    return 0;
}
