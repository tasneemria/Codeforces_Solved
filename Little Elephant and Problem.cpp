#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i] = arr[i];
    }
    sort(arr1,arr1+n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr1[i])
            cnt++;
    }
    if(cnt==2 || cnt==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
