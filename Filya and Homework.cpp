#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int inp;
        cin>>inp;
        mp[inp]++;
    }

    map<int,int>::iterator it;
    int cnt = 0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cnt++;
    }
    //cout<<cnt<<endl;
    if(cnt==1)
    {
        cout<<"YES"<<endl;
    }
    else if(cnt>3)
    {
        cout<<"NO"<<endl;
    }
    else if(cnt==2)
    {
        cout<<"YES"<<endl;
    }
    else if(cnt==3)
    {
        int arr[3],i=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            arr[i++] = it->first;
        }
        if(2*arr[1] == arr[0]+arr[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
