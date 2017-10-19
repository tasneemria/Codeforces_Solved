#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    long long l1,r1,l2,r2,min1=INFINITY,min2=INFINITY,max1=0,max2=0;
    for(int i=0; i<n; i++)
    {
        cin>>l1>>r1;
        if(max1<l1)
        {
            max1 = l1;
        }
        if(min1>r1)
        {
            min1 = r1;
        }
    }
    //cout<<max1<<endl;
    //cout<<min1<<endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>l2>>r2;
        if(max2<l2)
        {
            max2 = l2;
        }
        if(min2>r2)
        {
            min2 = r2;
        }
    }
    //cout<<max2<<endl;
    //cout<<min2<<endl;

    long long a,b;
    a = max2-min1;
    b = max1-min2;
    //cout<<a<<" "<<b<<endl;
    if(a<0 && b<0)
    {
        cout<<0<<endl;
    }
    else if(a>b)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<b<<endl;
    }

    return 0;
}
