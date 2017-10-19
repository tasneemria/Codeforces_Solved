#include<iostream>

using namespace std;

int l[1000000],r[1000000];

int main()
{
    int n,k;
    int Max = -1;

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(l[j]>l[j+1])
            {
                swap(l[j],l[j+1]);
                swap(r[j],r[j+1]);
            }
        }
    }
    int flag = 0;
    int mx = 0;
    for(int i=0;i<n-k;i++)
    {
        flag = 0;
        for(int j=0;j<=k;j++)
        {
            if(r[j]<l[j+1])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            if(Max<(l[i]-r[i+k-1]))
            {
                mx = i;
                Max = l[i]-r[i+k-1];
            }

        }
    }

    for(int i=0;i<k;i++)
        cout<<mx+i<<" ";
    cout<<endl;
    cout<<Max<<endl;

    return 0;
}
