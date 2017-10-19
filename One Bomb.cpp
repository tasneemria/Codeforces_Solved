#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char ch[r+1][c+1];
    int rcnt[r+1],ccnt[c+1];
    int markrow=1,markcol=1;
    int mx = 0;
    int count=0;
    for(int i=1; i<=r; i++)
    {
        int cnt = 0;
        for(int j=1; j<=c; j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='*')
            {
                cnt++;
                count++;
            }
        }
        rcnt[i] = cnt;
    }
    mx = 0;
    for(int j=1; j<=c; j++)
    {
        int cnt = 0;
        for(int i=1; i<=r; i++)
        {
            if(ch[i][j]=='*')
            {
                cnt++;
            }
        }
        ccnt[j] = cnt;
    }
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(ch[i][j]=='*' && rcnt[i]+ccnt[j]-1==count)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
            if(ch[i][j]=='.' && rcnt[i]+ccnt[j]==count)
                {
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
