#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int mx,mn;
    mx = max(m,n);
    mn = min(m,n);
    if(mn*2<=mx)
    {
        cout<<mn<<endl;
    }
    else
    {
        int cnt = 0;
        for(int i=1;;i++)
        {
            if(mx && mn) break;
            if(mx==1 && mn==1) break;
            if(i%2==1)
            {
                mx-=2;
                mn-=1;
            }
        }
    }

    return 0;
}
