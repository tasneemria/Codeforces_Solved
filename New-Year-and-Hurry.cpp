#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,y=240,countt=0,rem,n,k,i,f;
    cin>>n>>k;
    rem=240-k;
    for(i=1;i<=n;i++)
    {
        f=i*5;
        if(f<=rem)
        {
            rem-=f;
            countt++;
        }
        else {break;}
    }
    cout<<countt;
    return 0;
}
