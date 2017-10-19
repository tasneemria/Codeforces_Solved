#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0) return b;
    else return gcd(b%a,a);
}

int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=n/2;i>0;i--)
    {
        if(gcd(i,n-i)==1)
        {
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }

    return 0;
}
