#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,a,b;
    cin>>n>>m>>a>>b;
    if(a<=(b/m))
    {
        cout<<(int)(n*a)<<endl;
    }
    else
    {
        int ans = ceil(n/m);
        double ans2,need;
        int mod;
        mod = ((int)n)%((int)m);
        ans2 = a*mod;
        need = n-mod;
        need = need/m;
        ans2 = ans2+need*b;
        if(ans*b<ans2)
            cout<<(int)(ans*b);
        else
            cout<<(int)ans2;
    }

    return 0;
}
