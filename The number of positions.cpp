#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b>=n)
        b = n-a-1;

    int one = n-a;
    one = min(one,b);
    cout<<one+1<<endl;

    return 0;
}
