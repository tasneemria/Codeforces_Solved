#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,k;
    cin>>n>>k;
    int a[n],b[k];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>b[i];

    sort(b,b+k);
    reverse(b,b+k);
    int idx = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) a[i] = b[idx++];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;

    return 0;
}
