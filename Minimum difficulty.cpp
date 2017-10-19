#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    int n;
    cin>>n;
    int max1 = 0;
    int arr[n+1],consum[n+1],diff[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    diff[1] = 0;
    for(int i=2;i<=n;i++)
    {
        diff[i] = arr[i]-arr[i-1];
        if(max1<diff[i])
            max1 = diff[i];
    }
    consum[1] = 0;
    consum[2] = 0;
    int low = INFINITY;
    for(int i=3;i<=n;i++)
    {
        consum[i] = diff[i]+diff[i-1];
        if(low>consum[i])
            low = consum[i];
    }

    if(low>max1) cout<<low<<endl;
    else cout<<max1<<endl;

    return 0;
}
