#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    long long arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]+arr[i+1]<<" ";
    }
    cout<<arr[n-1]<<endl;

    return 0;
}
