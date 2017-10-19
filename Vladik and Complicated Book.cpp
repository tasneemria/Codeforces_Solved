#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m;
    cin>>n>>m;
    int p[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(int ii=0;ii<m;ii++)
    {
        int l,r,x;
        cin>>l>>r>>x;
        if(x==l)
        {
            for(i=l+1;i<=r;i++)
            {
                if(p[x]>p[i])
                {
                    cout<<"No"<<endl;
                    break;
                }
            }
            if(i==r+1)
            {
                cout<<"Yes"<<endl;
            }
        }
        else if(x==r)
        {
            for(i=l;i<r;i++)
            {
                if(p[x]<p[i])
                {
                    cout<<"No"<<endl;
                    break;
                }
            }
            if(i==r)
            {
                cout<<"Yes"<<endl;
            }
        }
        else
        {
            int left=0,right=0;
            for(i=l;i<x;i++)
            {
                if(p[x]<p[i]) left++;
            }
            for(i=x+1;i<=r;i++)
            {
                if(p[x]>p[i]) right++;
            }
            if(left==right) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

    return 0;
}
