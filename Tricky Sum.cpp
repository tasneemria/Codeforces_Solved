#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long sum,mul = 1;
        sum = n*(n+1)/2;
        while(mul<=n)
        {
            //cout<<sum<<endl;
            sum-=(2*mul);
            mul*=2;
        }
        cout<<sum<<endl;
    }



    return 0;
}
