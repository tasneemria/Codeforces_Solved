#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,inp,a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        a = a+inp;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>inp;
        b = b+inp;
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>inp;
        c = c+inp;
    }
    cout<<a-b<<endl;
    cout<<b-c<<endl;

    return 0;
}
