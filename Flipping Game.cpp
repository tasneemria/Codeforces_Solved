#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int resi = 0,resj = 0,ans = 0,one = 0,zero = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i-1]==1 && i!=0) resi++;
        for(int j=n-1;j>=i;j--)
        {
            one = 0;
            zero = 0;
            if(arr[j+1]==1 && j!=n-1) resj++;
            for(int k=i;k<=j;k++)
            {
                if(arr[k]==0)
                    zero++;
                else
                    one++;
            }
            if(ans<resi+resj+zero) ans = resi+resj+zero;
        }
        resj = 0;
    }

    cout<<ans<<endl;

    return 0;
}
