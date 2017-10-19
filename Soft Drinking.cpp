#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k = k*l;
    k = k/nl;
    c = c*d;
    p = p/np;
    k = min(k,c);
    k = min(k,p);
    cout<<k/n<<endl;

    return 0;
}
