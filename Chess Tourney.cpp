#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos=0;
    cin>>n;
    int arr[2*n];
    map<int,int> mp;
    for(int i=1;i<=2*n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }

    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        arr[pos] = it->second;
        //cout<<arr[pos]<<" ";
        pos++;
    }
    //cout<<pos<<endl;
    sort(arr,arr+pos);

    for(int i=pos-1;i>0;i--)
    {
        int a = arr[i]-arr[i-1];
        if(arr[i]==0) continue;
        arr[i-1] = a;
        arr[i] = 0;
    }

    for(int i=0;i<pos;i++)
    {
        if(arr[i]>0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
