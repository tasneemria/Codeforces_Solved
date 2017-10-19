#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int a,l,r;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>l>>r;
        int flag=0;
        for(int k=0;k<m;k++)
        {
            flag = 0;
            for(int k1=l-1;k1<r-1;k1++)
            {
                if(arr[k1][k]>arr[k1+1][k])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
