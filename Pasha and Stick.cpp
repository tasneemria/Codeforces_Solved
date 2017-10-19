#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n%2==1)
    {
        cout<<0<<endl;
        return 0;
    }
    long long result = n/4;
    if(n%4==0) cout<<result-1<<endl;
    else cout<<result<<endl;

    return 0;
}
