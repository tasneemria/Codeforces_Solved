#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],outarr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        outarr[i] = arr[i];
    }
    int total = 0;
    for(int i=0;i<n-1;i++)
    {
        if(outarr[i]+outarr[i+1]>=k)
        {
            continue;
        }
        else
        {
            int diff;
            diff = outarr[i+1]+outarr[i];
            outarr[i+1]+= k-diff;
            total+=(k-diff);
        }
    }
    cout<<total<<endl;
    for(int i=0;i<n;i++)
        cout<<outarr[i]<<" ";
    cout<<endl;

    return 0;
}
