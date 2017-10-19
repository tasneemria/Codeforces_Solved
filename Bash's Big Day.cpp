#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s[n];
    int maX=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(maX<s[i])
            maX = s[i];
    }
    int cnt=0,maxC=0;

    for(int i=2;i<=maX/2;i++)
    {
        cnt = 0;
        for(int j=0;j<n;j++)
        {
           if(s[j]%i==0)
           {
               cnt++;
           }
        }
        if(maxC<cnt)
            maxC = cnt;
    }

    cout<<maxC<<endl;

    return 0;
}
