#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int d[n+1];
    for(int i=1;i<n;i++) cin>>d[i];
    int a,b;
    cin>>a>>b;
    int sum = 0;
    for(int i=a;i<b;i++)
        sum+=d[i];

    cout<<sum<<endl;

    return 0;
}
