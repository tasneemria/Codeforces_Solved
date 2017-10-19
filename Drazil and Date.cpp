#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,s;
    cin>>a>>b>>s;
    if(a<0)
        a = -a;
    if(b<0)
        b = -b;
    a+=b;
    if(s<a)
    {
        cout<<"No"<<endl;
    }
    else if(s==a)
    {
        cout<<"Yes"<<endl;
    }
    else if(s>a)
    {
        a = s-a;
        if(a%2==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}

