#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char ch1[n][m],ch2[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ch1[i][j];
            if(ch1[i][j]=='.')
            {
                if((i+j)%2==0)
                {
                    ch1[i][j] = 'W';
                }
                else
                {
                    ch1[i][j] = 'B';
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ch1[i][j];
        }
        cout<<endl;
    }

    return 0;
}
