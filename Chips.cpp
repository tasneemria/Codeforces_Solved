#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int total = (n*(n+1))/2;
    m = m%total;
    for(int i=1;i<=n;i++)
    {
        int calc = (i*(i+1))/2;
        if(calc>m)
        {
            cout<<m-((i*(i-1))/2)<<endl;
            return 0;
        }

    }

    return 0;
}
