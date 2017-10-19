#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,one=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            one = 1;
        }
    }
    if(one==1)
        cout<<-1<<endl;
    else
        cout<<1<<endl;

    return 0;
}
