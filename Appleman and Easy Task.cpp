#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    char arr[n+2][n+2];
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=n+1;j++)
            arr[i][j] = 'a';
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int cnt;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cnt = 0;
            if(arr[i][j]=='x' || arr[i][j]=='o')
            {
                if(arr[i+1][j]=='o')
                {
                    cnt++;
                }
                if(arr[i-1][j]=='o')
                {
                    cnt++;
                }
                if(arr[i][j+1]=='o')
                {
                    cnt++;
                }
                if(arr[i][j-1]=='o')
                {
                    cnt++;
                }
            }
            if(cnt%2==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
