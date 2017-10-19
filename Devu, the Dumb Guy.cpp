#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    long long c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    sort(c,c+n);
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=(x*c[i]);
        if(x>=2)
        {
            x--;
        }
    }
    cout<<sum<<endl;

    return 0;
}
