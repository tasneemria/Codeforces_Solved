#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(arr[0]<=arr[1])
    {
        int i,j;
        for(i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                pos = i+1;
                break;
            }
        }
        if(i==n-1)
        {
            cout<<0<<endl;
            return 0;
        }
        for(j=pos;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        if(j==n-1)
        {
            cout<<n-pos<<endl;
            return 0;
        }
    }
    else
    {
        if(n==2)
        {
            if(arr[0]<=arr[1])
            {
                cout<<0<<endl;
                return 0;
            }
            else
            {
                cout<<1<<endl;
                return 0;
            }
        }
        cout<<-1<<endl;
    }

    return 0;
}
