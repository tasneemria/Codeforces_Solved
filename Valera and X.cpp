#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ch[i][j];
        }
    }

    char dia = ch[0][0],other = ch[1][0];
    if(dia==other)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0,j=n-1;i<=n/2;i++,j--)
    {
        if(ch[i][i]==dia && ch[i][j]==dia)
        {
            ch[i][i] = '#';
            ch[i][j] = '#';
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    for(int i=n-1,j=0;i>n/2;i--,j++)
    {
        if(ch[i][i]==dia && ch[i][j]==dia)
        {
            ch[i][i] = '#';
            ch[i][j] = '#';
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ch[i][j]!=other && ch[i][j]!='#')
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
