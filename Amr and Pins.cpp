#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    long long r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    long long a = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    //cout<<a<<endl;
    double d = sqrt(a);
    //cout<<d<<endl;
    d = ceil(d/(2*r));
    cout<<d<<endl;

    return 0;
}
