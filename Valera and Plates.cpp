#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,clean=0;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            if(m>0) m--;
            else if(m==0)
            {
                clean++;
            }
        }
        else
        {
            if(k>0) k--;
            else if(m>0) m--;
            else
            {
                clean++;
            }
        }
    }

    cout<<clean<<endl;

    return 0;
}
