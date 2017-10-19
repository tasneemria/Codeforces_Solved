#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int inp;
    int total = 0,waste = 0;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        if(inp<=b)
        {
            total+=inp;
        }
        if(total>d)
        {
            total = 0;
            waste++;
        }
    }

    cout<<waste<<endl;

    return 0;
}
