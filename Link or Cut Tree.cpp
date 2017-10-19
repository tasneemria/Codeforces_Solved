#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r,k;
    cin>>l>>r>>k;
    int flag = 0;
    long long ans = 1;
    //if(1>=l && 1<=r) cout<<1<<" ";
    for(int i=0;;i++)
    {
       // ans*=k;
        if(ans>=l && ans<=r)
        {
            flag = 1;
            cout<<ans<<" ";
        }
        if(ans>r/k) break;
        ans*=k;
//        else if(ans>r)
//        {
//            break;
//        }
    }
    if(flag==0) cout<<-1<<endl;

    return 0;
}
