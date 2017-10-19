#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int x,y;
    int mx = -1;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<s)
        {
            int a = 100-y;
            if(y==0) mx = max(0,mx);
            else mx = max(a,mx);
        }
        else if(x==s)
        {
            if(y==0)
                mx = max(mx,0);
        }
    }

    cout<<mx<<endl;

    return 0;
}
