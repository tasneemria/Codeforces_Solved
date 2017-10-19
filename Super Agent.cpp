#include<iostream>

using namespace std;

int main()
{
    char str[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>str[i][j];
        }
    }

    if(str[0][0]==str[2][2] && str[1][0]==str[1][2] && str[2][0]==str[0][2] && str[0][1]==str[2][1])
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
