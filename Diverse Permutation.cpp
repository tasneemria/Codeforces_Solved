#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<1<<" "<<k+1<<" ";
    int i,itk = k;
    for(i=2;i<itk;i++)
    {
        cout<<i<<" "<<itk<<" ";
        itk--;
    }
    if(i==itk) cout<<i<<" ";
    for(i = k+2;i<=n;i++)
    {
        cout<<i<<" ";
    }

    return 0;
}
