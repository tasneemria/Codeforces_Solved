#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    int len = x.length();
    char z[len+1];

    int i;
    for(i=0;i<x.length();i++)
    {
        if(x[i]==y[i])
        {
            z[i] = x[i];
        }
        else if(x[i]>y[i])
        {
            z[i] = y[i];
        }
        else if(x[i]<y[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    z[len] = '\0';
    cout<<z<<endl;

    return 0;
}
