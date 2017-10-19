#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< string, int > mp;
    int n;
    cin>>n;
    string arr[100000];
    int cnt[100000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]+=1;
    }

    for(int i=0;i<n;i++)
    {
        cnt[i] = mp[arr[i]];
        //cout<<cnt[i]<<endl;
    }

    for(int i=0;i<n;i++)
    {

            if(cnt[i]-mp[arr[i]] == 0)
            {
                cout<<"OK"<<endl;
                mp[arr[i]]-=1;
            }
            else
            {
                cout<<arr[i]<<cnt[i]-mp[arr[i]]<<endl;
                mp[arr[i]]-=1;
            }

    }

    return 0;
}
