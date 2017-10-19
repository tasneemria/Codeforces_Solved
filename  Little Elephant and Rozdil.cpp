#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> mp;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }

    map<int,int>::iterator it;
    it = mp.begin();
    if(it->second>1)
    {
        cout<<"Still Rozdil"<<endl;
    }
    else if(it->second==1)
    {
        int a = it->first;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==a)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }


    return 0;
}
