#include<bits/stdc++.h>
using namespace std;

int main()
{

    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

    int cnt=0;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a,b;
            cin>>a>>b;
            if(a==1 || b==1)
                cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
