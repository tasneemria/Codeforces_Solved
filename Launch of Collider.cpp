#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    string str;
    cin>>str;
    long long arr[n+1];
    for(long long i=0;i<n;i++)
        cin>>arr[i];

    int flag=0;

    long long diff = INFINITY;
    for(long long i=0;i<n-1;i++)
    {
        if(str[i]=='R' && str[i+1]=='L')
        {
            flag = 1;
            long long dis = arr[i+1]-arr[i];
            diff = min(diff,dis);
            //cout<<diff<<endl;
        }
    }
    if(flag==0)
        cout<<-1<<endl;
    else
        cout<<diff/2<<endl;

    return 0;
}
