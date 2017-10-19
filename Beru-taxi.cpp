#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,x,y;
    cin>>a>>b>>n;
    double dis[n],v[n];

    double ans;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        cin>>v[i];
        dis[i] = sqrt((x-a)*(x-a)+(y-b)*(y-b));
        //cout<<dis[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=dis[i]/v[i];
        //cout<<dis[i]<<endl;
    }
    sort(dis,dis+n);
    //cout<<dis[n-1]<<endl;
    printf("%0.9lf",dis[0]);

    return 0;
}
