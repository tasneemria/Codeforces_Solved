#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int> scn;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        scn[arr[i]]++;
    }
    int maX=0;
    map<int,int>::iterator it;
    for(it=scn.begin();it!=scn.end();it++)
    {
        if(maX<it->second)
            maX = it->second;
    }
    int m;
    cin>>m;
    int b[m],c[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }


    return 0;
}
