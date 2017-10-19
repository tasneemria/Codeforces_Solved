#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    x*=10000000;
    vector<int> vct;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vct.push_back(a);
        mp[a]++;
    }
    vector<int> :: iterator it;
    sort(vct.begin(),vct.end());
    for(int i=0;i<n;i++)
    {
        int an = x-vct[i];
        mp[vct[i]]--;
        it = find(vct.begin(),vct.end(),an);
        if(it!=vct.end())
        {
            if(mp[an]>0)
            {
                cout<<"yes "<<vct[i]<<" "<<an<<endl;
                return 0;
            }
        }
    }
    cout<<"danger"<<endl;

    return 0;
}
