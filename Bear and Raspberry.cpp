#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = arr[0]-arr[1];
    //cout<<sum<<endl;
    for(int i=1;i<n-1;i++)
    {
        sum = max(sum,arr[i]-arr[i+1]);
       // cout<<sum<<endl;
    }
    if(sum-c<0)
        cout<<0<<endl;
    else
        cout<<sum-c<<endl;

    return 0;
}
