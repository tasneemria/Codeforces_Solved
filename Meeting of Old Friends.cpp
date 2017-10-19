#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    if(l1<l2)
        l1 = l2;
    if(r1>r2)
        r1 = r2;

    if(r1<l2)
        cout<<0<<endl;
    else if(r2<l1)
        cout<<0<<endl;
    else if(k>=l1 && k<=r1)
        cout<<r1-l1<<endl;
    else
        cout<<r1-l1+1<<endl;

    return 0;
}
