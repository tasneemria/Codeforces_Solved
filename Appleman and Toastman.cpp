#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n+1];
    arr[0] = 0;
    for(long long i=1; i<=n; i++)
        cin>>arr[i];

    sort(arr,arr+n+1);
    long long consum[n+1];
    consum[0] = arr[0];
    consum[1] = arr[1];
    for(long long i=2; i<=n; i++)
    {
        consum[i] = consum[i-1]+arr[i];
    }

    long long total=consum[n];
    for(long long i=1;i<n;i++)
    {
        total+=consum[i]-consum[i-1];
        total+=consum[n]-consum[i];
    }

    cout<<total<<endl;

    return 0;
}
