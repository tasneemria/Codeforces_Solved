#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    if(n==1)
    {
        cout<<-1<<endl;
    }
    else if(n==2)
    {
        if(x[0]!=x[1] && y[0]!=y[1])
        {
            int a = fabs(x[0]-x[1]),b = fabs(y[0]-y[1]);
            cout<<a*b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else if(n==3 || n==4)
    {
        sort(x,x+n);
        sort(y,y+n);

        int a = fabs(x[0]-x[n-1]),b = fabs(y[0]-y[n-1]);
        cout<<a*b<<endl;

    }

    return 0;
}
