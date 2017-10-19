#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    long long mx[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mx[n-1] = arr[n-1];
    long long high=mx[n-1];
    for(long long i=n-2;i>=0;i--)
    {
        if(high>arr[i])
        {
            mx[i] = high;
        }
        else
        {
            mx[i] = arr[i];
            high = mx[i];
        }
        //cout<<mx[i]<<endl;
    }
    for(long long i=0;i<n;i++)
    {
        if(arr[i]==mx[i])
        {
            if(arr[i]==mx[i+1])
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        else
        {
            cout<<mx[i]-arr[i]+1<<" ";
        }
    }

    return 0;
}
