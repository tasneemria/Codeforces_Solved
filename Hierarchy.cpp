#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b,c;
    cin>>n;
    int weight[n+1],parent[n+1],qualify[n+1];
    for(int i=1;i<=n;i++)
        cin>>qualify[i];
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        parent[i] = i;
        weight[i] = 10000000;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        if(weight[b]>c)
        {
            weight[b] = c;
            parent[b] = a;
        }
    }
    int cnt=0,source;
    for(int i=1;i<=n;i++)
    {
        //cout<<"for start"<<endl;
        if(parent[i]==i)
        {
            cnt++;
            source = i;
        }
    }
    int sum=0;
    if(cnt>1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i!=source)
            {
                sum+=weight[i];
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
