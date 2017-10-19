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
    long long len=arr[n-1],curr=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<curr)
        {
            len+=arr[i];
            curr = arr[i];
        }
        else if(arr[i]==curr)
        {
            curr--;
            if(curr<0)
                curr = 0;
            len+=curr;
        }
        else if(arr[i]>curr)
        {
            curr--;
            if(curr<0)
                curr = 0;
            len+=curr;
        }
    }

    cout<<len<<endl;

    return 0;
}
