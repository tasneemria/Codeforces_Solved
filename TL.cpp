#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);
    int mx = max(2*a[0],a[n-1]);
    if(mx<b[0]) cout<<mx<<endl;
    else cout<<-1<<endl;

    return 0;
}
