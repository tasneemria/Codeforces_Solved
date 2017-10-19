#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char chess[8][8];
    int count1=0,count2=0;
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>chess[i][j];
        }
    }

    for(i=0;i<8;i++)
    {
        if(chess[i][0]=='B')
        {
            for(j=1;j<8;j++)
            {
                if(chess[i][j]!='B')
                {
                    break;
                }
            }
            if(j==8)
            {
                count1++;
                memset(chess[i],'C',8);
            }
        }
    }

    //int row = count;
    int CB=0,CC=0;
    for(j=0;j<8;j++)
    {
        if(chess[0][j]=='B' || chess[0][j]=='C')
        {
            for(i=0;i<8;i++)
            {
                if(chess[i][j]=='W')
                    break;
                else if(chess[i][j]=='B')
                {
                    CB++;
                }
                else if(chess[i][j]=='C')
                {
                    CC++;
                }
            }
            if(i==8 && CC!=8)
            {
                if((CB+CC)==8)
                {
                    count2++;
                }
            }
        }
        CB = 0;
        CC = 0;
    }

//    cout<<endl;
//
//    for(i=0;i<8;i++)
//    {
//        for(j=0;j<8;j++)
//        {
//            cout<<chess[i][j];
//        }
//        cout<<endl;
//    }

    cout<<count1+count2;

    return 0;
}
