#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n>>str;
    if(n%2==0)
    {
        for(int i=n-2;i>=0;i-=2)
        {
            cout<<str[i];
        }
        for(int i=1;i<n;i+=2)
        {
            cout<<str[i];
        }
    }
    else
    {
        for(int i=n-2;i>0;i-=2)
        {
            cout<<str[i];
        }
        for(int i=0;i<n;i+=2)
        {
            cout<<str[i];
        }
    }

    return 0;
}
