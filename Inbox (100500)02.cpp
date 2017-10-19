#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[0] = -1;
    int flag = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1 && flag==0)
        {
            flag = i;
        }
    }
    if(flag==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int sum = 1;
    for(int i=flag+1;i<=n;i++)
    {
        if(arr[i]==1 && arr[i-1]==0)
        {
            sum+=2;
        }
        else if(arr[i]==1)
        {
            sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}
