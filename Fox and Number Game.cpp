#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int n;
    cin>>n;
    int a,g=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        g = gcd(g,a);
    }

    cout<<g*n<<endl;

    return 0;
}
