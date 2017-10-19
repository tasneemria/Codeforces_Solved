#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n%2==0) cout<<"No"<<endl;
    else
    {
        if(a[0]%2==0 || a[n-1]%2==0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}
