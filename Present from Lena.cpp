#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i;k++)
        {
            if(i==0)
                cout<<k;
            else
                cout<<k<<" ";
        }
        for(int l=i-1;l>=0;l--)
        {
            if(l>0)
                cout<<l<<" ";
            else if(l==0)
                cout<<l;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++)
        {
            if(i==n-1)
                cout<<k;
            else
                cout<<k<<" ";
        }
        for(int l=n-i-2;l>=0;l--)
        {
            if(l==0)
                cout<<l;
            else
                cout<<l<<" ";
        }
        cout<<endl;
    }

    return 0;
}
