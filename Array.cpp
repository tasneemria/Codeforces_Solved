#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0) neg++;
        else if(arr[i]>0) pos++;
    }

    sort(arr,arr+n);
    if(pos==0)
    {
        cout<<1<<" "<<arr[0]<<endl;
        cout<<2<<" "<<arr[1]<<" "<<arr[2]<<endl;
        cout<<n-3<<" ";
        for(int i=3;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else if(pos>0)
    {
        cout<<1<<" "<<arr[0]<<endl;
        int position = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                position = i;
                break;
            }
        }
        cout<<1<<" "<<arr[position]<<endl;
        cout<<n-2<<" ";
        for(int i=1;i<n;i++)
        {
            if(i==position) continue;
            else
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}
