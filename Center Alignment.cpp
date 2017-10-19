#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[1000][1000];
    int row=0,col=0;

    while(gets(ch[row])!=NULL)
    {
        if(col<strlen(ch[row]))
        {
            col = strlen(ch[row]);
        }
        row++;
    }

    //cout<<row<<" "<<col<<endl;
    for(int i=0; i<col+2; i++)
        cout<<"*";
    cout<<endl;

    int space,flag=0;//falg for allingnment exchange
    for(int i=0; i<row; i++)
    {
        cout<<"*";
        space = (col-strlen(ch[i]))/2;
        if(col%2 != strlen(ch[i])%2)
        {
            if(flag==0)
            {
                for(int j=0; j<space; j++)
                    cout<<" ";
                cout<<ch[i];
                for(int k=0; k<col-space-strlen(ch[i]); k++)
                    cout<<" ";
                cout<<"*"<<endl;
                flag = 1;
            }
            else
            {
                for(int j=0; j<=space; j++)
                    cout<<" ";
                cout<<ch[i];
                for(int k=0; k<col-space-strlen(ch[i])-1; k++)
                    cout<<" ";
                cout<<"*"<<endl;
                flag = 0;
            }
        }
        else
        {
            for(int j=0; j<space; j++)
                cout<<" ";
            cout<<ch[i];
            for(int k=0; k<col-space-strlen(ch[i]); k++)
                cout<<" ";
            cout<<"*"<<endl;
        }

//        space = (col-strlen(ch[i]))/2;
//        for(int j=0; j<space; j++)
//            cout<<" ";
//        cout<<ch[i];
//        for(int k=0; k<col-space-strlen(ch[i]); k++)
//            cout<<" ";
//        cout<<"*"<<endl;
    }

    for(int i=0; i<col+2; i++)
        cout<<"*";
    cout<<endl;

    return 0;
}
