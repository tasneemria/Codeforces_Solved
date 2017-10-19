#include<bits/stdc++.h>
using namespace std;

double EPS = 1e-12;

int main()
{
    int n;
    cin>>n;
    long long arr[n][2];
    for(int i=0;i<n;i++)
    {
        //cin>>arr[i][0]>>arr[i][1];
        scanf("%lld%lld",&arr[i][0],&arr[i][1]);
        //cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }
    long long man,dan,ans=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            man = fabs(arr[i][0]-arr[j][0])+fabs(arr[i][1]-arr[j][1]);
            dan = (arr[i][0]-arr[j][0])*(arr[i][0]-arr[j][0])+(arr[i][1]-arr[j][1])*(arr[i][1]-arr[j][1]);
            double a,b;
            a = (double)man;
            b = sqrt(dan);
            //cout<<a<<" "<<b<<endl;
            if((a-b)<=EPS) ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
