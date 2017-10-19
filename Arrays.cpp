#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int nA,nB,k,m;
    cin>>nA>>nB>>k>>m;
    int a1[nA+1],a2[nB+1];
    for(int i=1;i<=nA;i++)
        cin>>a1[i];

    for(int i=1;i<=nB;i++)
        cin>>a2[i];

    if(a1[k]<a2[nB-m+1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
