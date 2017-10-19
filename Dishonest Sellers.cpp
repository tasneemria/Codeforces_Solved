#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n],diff[n];
    long long real=0,discount=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        real+=a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        discount+=b[i];
    }
    int mns = 0;
    for(int i=0; i<n; i++)
    {
        diff[i] = a[i]-b[i];
        if(diff[i]<0)
            mns++;
    }
    long long result=0;

    if(mns>=k)
    {
        for(int i=0; i<n; i++)
        {
            if(diff[i]<0)
                result+=diff[i];
        }
        cout<<result+discount<<endl;
    }
    else
    {
        sort(diff,diff+n);
        for(int i=0;i<k;i++)
        {
            result+=diff[i];
        }
        cout<<result+discount<<endl;
    }
    return 0;
}
