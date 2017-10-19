#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],outarr[20001],savearr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        savearr[i] = arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    outarr[arr[0]] = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            outarr[arr[i]] = i+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<outarr[savearr[i]]<<" ";
    }
    cout<<endl;

    return 0;
}
