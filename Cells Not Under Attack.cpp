#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;

    long long row[n+1],col[n+1];
    for(int i=1;i<=n;i++)
    {
        row[i] = 1;
        col[i] = 1;
    }
    long long total = n*n,r,c,usedC=0,usedR=0;
    for(int i=0;i<m;i++)
    {
        cin>>r>>c;
        if(row[r]==1 && col[c]==1)
        {
            row[r] = 0;
            col[c] = 0;
            total = total+usedC+usedR-(n*2-1);
            usedC++;
            usedR++;
        }
        else if(row[r]==0 && col[c]==0)
        {

        }
        else if(row[r]==0)
        {
            col[c] = 0;
            total = total+usedR-n;
            usedC++;
        }
        else if(col[c]==0)
        {
            row[r] = 0;
            total = total+usedC-n;
            usedR++;
        }
        //cout<<endl;
        cout<<total<<" ";
    }


    return 0;
}
