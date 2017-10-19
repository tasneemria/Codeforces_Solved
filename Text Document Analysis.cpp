#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    char ch[n+1];
    ch[0] = '_';
    for(int i=1; i<=n; i++)
        cin>>ch[i];

    int out = 0,in = 0;
    int i,j,k;
    for(i=0;i<=n;)
    {
        if(ch[i]=='_' || ch[i]==')')
        {
            for(j=i+1; j<=n; j++)
            {
                if(ch[j]=='_' || ch[j]=='(')
                {
                    if(out<j-i-1)
                    {
                        out = j-i-1;
                    }
                    break;
                }
            }
            //cout<<j<<endl;
            if(j==n+1)
            {
                if(out<j-i-1)
                {
                    out = j-i-1;
                }
                break;
            }
            i = j;
        }
        else if(ch[i]=='(')
        {
            for(k=i;k<n;)
            {
                for(j=k+1;j<=n;j++)
                {
                    if(ch[j]=='_')
                    {
                        if(j-k>1)
                        {
                            in++;
                        }
                        break;
                    }
                    else if(ch[j]==')')
                    {
                        i = j;
                        if(j-k>1) in++;
                        break;
                    }
                }
                if(ch[j]==')')
                {
                    break;
                }
                if(j==n+1)
                {
                    if(j-k>1)
                    {
                        in++;
                    }
                }
                k = j;
            }
            i = j;
        }
    }

    cout<<out<<" ";
    cout<<in<<endl;

    return 0;
}
