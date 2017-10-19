#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int cnt=0,cake=0,flag=1;
    for(int i=0;i<r;i++)
    {
        flag = 1;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]=='S')
            {
                //cout<<"....."<<endl;
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j] = 'k';
            }
            cake+=c;
        }
    }

    for(int j=0;j<c;j++)
    {
        flag = 1;
        for(int i=0;i<r;i++)
        {
            if(arr[i][j]=='S')
            {
                //cout<<"........"<<endl;
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            for(int i=0;i<r;i++)
            {
                if(arr[i][j]=='.')
                    cake++;
            }
        }
    }
    cout<<cake<<endl;

    return 0;
}
