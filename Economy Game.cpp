#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,c;
    cin>>n;
    if(n<1234)
    {
        cout<<"NO";
        return 0;
    }
    int flag = 0;
    for(a=0; a<=n/1234567; a++)
    {
        for(b=0; b<=n/123456; b++)
        {
            long long an = n-a*1234567-b*123456;
            if(an>=0 && an%1234==0)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
