#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int t,k,d;
    int server[n+4];
    for(int i=1; i<=n; i++)
    {
        server[i] = 0;
    }
    for(int i=0; i<q; i++)
    {
        cin>>t>>k>>d;
        int j;
        int sum=0,s=0;
        for(j=1; j<=n; j++)
        {
            if(server[j]<t)
            {
                s++;
                sum = sum+j;
                server[j] = t+d-1;
            }
            if(s==k)
            {
                cout<<sum<<endl;
                break;
            }
        }
        if(s<k)
            cout<<-1<<endl;
    }

    return 0;
}
