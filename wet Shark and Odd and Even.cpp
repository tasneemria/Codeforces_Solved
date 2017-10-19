#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long even=0,odd=0;
    long long e[n],o[n],sum=0;
    for(long long i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            e[even] = a;
            even++;
            sum+=a;
        }
        else
        {
            o[odd] = a;
            odd++;
        }
    }
    //cout<<odd<<endl;
    if(odd>1)
    {
        sort(o,o+odd);
        reverse(o,o+odd);
        for(int i=0;i<odd-1;i++)
        {
            sum+=o[i];
        }
        if(odd%2==0)
            sum+=o[odd-1];
    }
    cout<<sum<<endl;

    return 0;
}
