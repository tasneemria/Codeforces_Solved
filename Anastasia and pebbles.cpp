#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,pocket,day=0;
    cin>>n>>k;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pocket = ceil(arr[i]/k);
        day+=pocket;
    }
    if(day%2==0)
    {
        cout<<day/2<<endl;
    }
    else
    {
        cout<<day/2+1<<endl;
    }

    return 0;
}
