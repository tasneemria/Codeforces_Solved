#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int a[n+1],b[n+1],p[n+1],newarr[n+1];
    for(int i=1; i<=n; i++)
    {
        p[i] = 0;
        newarr[i] = i;
    }

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==b[i])
        {
            p[i] = a[i];
            newarr[a[i]] = -1;
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(p[i]==0)
        {
            for(int j=1;j<=n;j++)
            {
                if(newarr[j]!=-1)
                {
                    p[i] = newarr[j];
                    newarr[j] = -1;
                    break;
                }
            }
        }
    }

    for(int i=1;i<=n;i++)
        cout<<p[i]<<" ";
    cout<<endl;


    return 0;
}
