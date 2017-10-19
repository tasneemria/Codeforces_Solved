#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long cnt = 0;
    for(long long i=1;i<=n;i++)
    {
        cnt+=((i%5)+m)/5;
    }
    cout<<cnt<<endl;

    return 0;
}
