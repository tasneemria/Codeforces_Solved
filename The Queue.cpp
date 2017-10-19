#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ti,tf,t;
    cin>>ti>>tf>>t;
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long start,wait;
    if(arr[0]>ti)
        cout<<ti<<endl;
    else if(arr[0]==ti)
    {
        start = arr[0]-1;
        wait = 1;
        for(long long i=0;i<n-1;i++)
        {
            if(arr[i]+t<arr[i+1])
            {
                start = arr[i]+t;
                break;
            }
        }
        cout<<start<<endl;
    }
    else
    {
        start = arr[0]-1;
        wait = ti-start;
        long long diff = ti-arr[0],ses=ti+t;
        long long anthr;
        for(long long i=0;i<n-1;i++)
        {
            if(arr[i]+t<arr[i+1])
            {
                start = arr[i]+t;
                break;
            }
            else if(arr[i]+t==arr[i+1])
            {

            }
        }
    }

    return 0;
}
