#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    reverse(arr,arr+n);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(m>=arr[i])
        {
            cnt++;
            m-=arr[i];
        }
        else
        {
            break;
        }
    }
    if(m>0)
        cnt++;
    cout<<cnt<<endl;

    return 0;
}
