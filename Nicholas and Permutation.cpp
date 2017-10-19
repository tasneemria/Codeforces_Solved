#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n+1];
    int pos1,pos2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1) pos1 = i;
        if(arr[i]==n) pos2 = i;
    }
    int mx,mn;
    mx = max(pos1,pos2);
    mn = min(pos1,pos2);
    if((mn-1)>(n-mx))
    {
        cout<<mx-1-1<<endl;
    }
    else
    {
        cout<<n-mn-1<<endl;
    }

    return 0;
}
