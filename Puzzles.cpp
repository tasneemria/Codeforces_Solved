#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[50];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    int minV=1000000;
    for(int i=0;i<=m-n;i++)
    {
        if(minV>arr[i+n-1]-arr[i])
            minV = arr[i+n-1]-arr[i];
    }
    cout<<minV<<endl;

    return 0;
}
