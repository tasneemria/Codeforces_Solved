#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    arr[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        arr[i]+=arr[i-1];
    }
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(arr[b]-arr[a-1]>0)
        {
            sum+=arr[b]-arr[a-1];
        }
    }
    cout<<sum<<endl;

    return 0;
}
