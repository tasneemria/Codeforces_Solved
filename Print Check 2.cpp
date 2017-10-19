#include<bits/stdc++.h>
using namespace std;

class chk
{
public:
    int pos;
    int color;
};

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+1][m+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            arr[i][j] = 0;
        }
    }
    chk row[n+1],col[m+1];
    for(int i=1;i<=n;i++)
    {
        row[i].pos = -1;
        row[i].color = 0;
    }
    for(int i=1;i<=m;i++)
    {
        col[i].pos = -1;
        col[i].color = 0;
    }
    for(int i=0; i<k; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1)
        {
            row[b].pos = i;
            row[b].color = c;
        }
        else
        {
            col[b].pos = i;
            col[b].color = c;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(row[i].pos>col[j].pos)
            {
                cout<<row[i].color<<" ";
            }
            else
            {
                cout<<col[i].color<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
