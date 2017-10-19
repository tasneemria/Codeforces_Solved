#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n%4==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(n%4==3)
    {
        long long mn;
        mn = min(a,b+c);
        mn = min(mn,3*c);
        cout<<mn<<endl;
        return 0;
    }
    else if(n%4==2)
    {
        long long mn;
        mn = min(2*a,b);
        mn = min(mn,2*c);
        cout<<mn<<endl;
        return 0;
    }
    else if(n%4==1)
    {
        long long mn;
        mn = min(3*a,a+b);
        mn = min(mn,c);
        cout<<mn<<endl;
        return 0;
    }
}
