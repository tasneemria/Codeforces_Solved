#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[8];
    for(int i=0;i<8;i++)
    {
        cin>>str[i];
    }
    int flag = 0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(str[i][j]==str[i][j+1])
            {
                flag = 1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        cout<<"YES"<<endl;

    return 0;
}
