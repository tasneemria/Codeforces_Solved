#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>> vct;
    pair<int,int> pr;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        pr = make_pair(a,b);
        vct.push_back(pr);
    }

    sort(vct.begin(),vct.end());
    int time = max(s-vct[n-1].first,vct[n-1].second);
    //cout<<time<<endl;
    for(int i=n-2;i>=0;i--)
    {
        time+=vct[i+1].first-vct[i].first;
        if(vct[i].second>time) time = vct[i].second;
    }

    time+=vct[0].first;
    cout<<time<<endl;

    return 0;
}
