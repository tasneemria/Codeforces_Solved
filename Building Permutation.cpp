#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    long long ans = 0;
    for(int i=1;i<=n;i++)
    {
        ans+=fabs(i-arr[i-1]);
    }
    cout<<ans<<endl;

    return 0;
}
