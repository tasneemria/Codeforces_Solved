#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,s,x;
    cin>>t>>s>>x;
    if(t==0 && x==0)
    {
        cout<<"YES"<<endl;
    }
    else if(t>0 && x==0)
    {
        cout<<"NO"<<endl;
    }
    else if(t==x)
    {
        cout<<"YES"<<endl;
    }
    else if((x-t)>0 && (x-t)%s==0)
    {
        cout<<"YES"<<endl;
    }
    else if((x-t-1)>0 && (x-t-1)%s==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
