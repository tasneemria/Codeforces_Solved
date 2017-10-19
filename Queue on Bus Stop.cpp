#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int bus = 0,j;
    for(int i=0;i<n;)
    {
        int carry=0;
        for(j=i;j<n;j++)
        {
            carry+=arr[j];
            if(carry>m)
            {
                carry-=arr[j];
                i = j;
                bus++;
                break;
            }
            //cout<<carry<<endl;
        }

        if(j==n)
        {
            if(carry>0) bus++;
            break;
        }
    }
    cout<<bus<<endl;

    return 0;
}
