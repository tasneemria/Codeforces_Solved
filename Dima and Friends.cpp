#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    int ans = 0;
    for(int i=0;i<5;i++)
    {
        if((sum+i)%(n+1)!=0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
