#include<iostream>
using namespace std;

int main()
{
    long long n,k,even,odd;
    cin>>n>>k;
    even = n/2;
    odd = n-even;
    if(k<=odd)
    {
        cout<<k*2-1<<endl;
    }
    else
    {
        k = k-odd;
        cout<<k*2<<endl;
    }

    return 0;
}
