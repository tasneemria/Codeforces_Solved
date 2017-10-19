#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a1[n],a2[n];
    for(int i=0;i<n;i++)
        cin>>a1[i];

    for(int i=0;i<n;i++)
        cin>>a2[i];

    sort(a1,a1+n);
    sort(a2,a2+n);
    if(a1[0]==a2[0])
    {
        cout<<"NO"<<endl;
    }
    else if(a1[0]>a2[0])
    {
        int f = 1;
        for(int i=1;i<n;i++)
        {
            if(a1[i]<=a2[i])
            {
                f = 0;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(a1[0]<a2[0])
    {
        int f = 1;
        for(int i=1;i<n;i++)
        {
            if(a1[i]>=a2[i])
            {
                f = 0;
                break;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
