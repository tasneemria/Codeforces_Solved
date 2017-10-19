#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    while(m>n)
    {
        if(m%2==1) m++;
        else m/=2;
        cnt++;
    }
    cout<<cnt+n-m<<endl;

    return 0;
}
