#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    map<int,int>::iterator it;
    map<int,int>::iterator it1;
    int cnt = 0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cnt++;
    }
    if(cnt==2)
    {
        if(mp[arr[0]]==mp[arr[n-1]])
        {
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<arr[n-1];
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
