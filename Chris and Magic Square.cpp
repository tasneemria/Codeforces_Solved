#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n][n],pos0=-1,sum=0,flag = 0,sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0)
            {
                pos0 = i;
            }
        }
        if(pos0!=i && flag==0)
        {
            for(int j=0;j<n;j++)
            {
                sum+=arr[i][j];
            }
            flag = 1;
        }
    }
    //cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        sum2 = 0;
        if(pos0==i)
        {
            continue;
        }
        for(int j=0;j<n;j++)
        {
            sum2+=arr[i][j];
        }
        if(sum!=sum2)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    sum2 = 0;
    for(int i=0;i<n;i++)
    {
        sum2+=arr[pos0][i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[pos0][i]==0)
        {
            arr[pos0][i] = sum-sum2;
        }
    }

    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }

    long long dia1=0,dia2=0;
    for(int i=0;i<n;i++)
    {
        dia1+=arr[i][i];
    }
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        dia2+=arr[i][j];
    }
    if(dia1==dia2)
    {
        if(sum-sum2>0)
        {
            cout<<sum-sum2<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }


    return 0;
}
