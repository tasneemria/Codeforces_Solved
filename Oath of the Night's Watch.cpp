#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    int l = arr[0];
    int h = arr[n-1];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=l && arr[i]!=h)
            sum++;
    }
    cout<<sum<<endl;

    return 0;
}
