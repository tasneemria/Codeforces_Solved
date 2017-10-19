#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int dis = 10,flag=0;
    for(int i=m-2;i>=0;i--)
    {
        if(arr[i]<=k && arr[i]!=0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 1;
            dis+=10;
        }
    }
    //cout<<dis<<endl;
    int dis2 = 10,flag2 = 0;
    for(int i=m;i<n;i++)
    {
        if(arr[i]<=k && arr[i]!=0)
        {
            flag2 = 1;
            break;
        }
        else
        {
            flag2 = 1;
            dis2+=10;
        }
    }
    //cout<<flag<<flag2<<endl;
    //cout<<dis2<<endl;
    if(flag==0)
        cout<<dis2<<endl;
    else if(flag2==0)
        cout<<dis<<endl;
    else
    {
        int mn = min(dis,dis2);
        cout<<mn<<endl;
    }

    return 0;
}
