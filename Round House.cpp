#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    while(b<0)
    {
        b = n+b;
    }
    if((a+b)%n==0)
    {
        cout<<n<<endl;
        return 0;
    }
    cout<<(a+b)%n<<endl;

    return 0;
}
