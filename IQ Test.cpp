#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>ch[i][j];
        }
    }
    int has=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            has = 0;
            if(ch[i][j]=='#') has++;
            if(ch[i][j+1]=='#') has++;
            if(ch[i+1][j]=='#') has++;
            if(ch[i+1][j+1]=='#') has++;

            if(has==3 || has==4 || has==1 || has==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
