#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int r=0,b=0,y=0,g=0;
    //cout<<"len "<<str.length()<<endl;
    if(str.length()>4)
    {
        for(int i=0; i<str.length()-4; i++)
        {
            //cout<<"i "<<i<<endl;
            if(str[i]=='!' && i<4)
            {
                int j=i+4;
                //cout<<"j "<<j<<endl;
                while(j<str.length())
                {
                    //cout<<j<<endl;
                    if(str[j]=='R')
                    {
                        r++;
                        str[i] = 'R';
                        break;
                    }
                    else if(str[j]=='B')
                    {
                        b++;
                        str[i] = 'B';
                        break;
                    }
                    else if(str[j]=='Y')
                    {
                        y++;
                        str[i] = 'Y';
                        break;
                    }
                    else if(str[j]=='G')
                    {
                        g++;
                        str[i] = 'G';
                        break;
                    }
                    else if(str[j]=='!')
                    {
                        j = j+4;
                    }
                }
            }
            else if(str[i]=='!')
            {
                int j=i-4;
                //cout<<"j "<<j<<endl;
                while(j<str.length())
                {
                    //cout<<j<<endl;
                    if(str[j]=='R')
                    {
                        r++;
                        str[i] = 'R';
                        break;
                    }
                    else if(str[j]=='B')
                    {
                        b++;
                        str[i] = 'B';
                        break;
                    }
                    else if(str[j]=='Y')
                    {
                        y++;
                        str[i] = 'Y';
                        break;
                    }
                    else if(str[j]=='G')
                    {
                        g++;
                        str[i] = 'G';
                        break;
                    }
                    else if(str[j]=='!')
                    {
                        j = j-4;
                    }
                }
            }
        }
        for(int i=str.length()-4; i<str.length(); i++)
        {
            if(str[i]=='!')
            {
                if(str[i-4]=='R')
                {
                    r++;
                }
                else if(str[i-4]=='B')
                {
                    b++;
                }
                else if(str[i-4]=='Y')
                {
                    y++;
                }
                else if(str[i-4]=='G')
                {
                    g++;
                }
            }
        }
        cout<<r<<" "<<b<<" "<<y<<" "<<g<<endl;
    }
    else if(str.length()==4)
    {
        for(int i=0; i<4; i++)
        {
            if(str[i]=='R')
                r++;
            else if(str[i]=='B')
                b++;
            else if(str[i]=='Y')
                y++;
            else if(str[i]=='G')
                g++;
        }
        if(r==1)
            cout<<0<<" ";
        else if(r==0)
            cout<<1<<" ";
        if(b==1)
            cout<<0<<" ";
        else if(b==0)
            cout<<1<<" ";
        if(y==1)
            cout<<0<<" ";
        else if(y==0)
            cout<<1<<" ";
        if(g==1)
            cout<<0<<" ";
        else if(g==0)
            cout<<1<<" ";
    }
    //cout<<str.length()<<endl;

    return 0;
}
/*
!Y!!!Y!!G!!!G!!B!!R!!!!B!!!!!Y!!G!R!!!!!!!!!!!!B!!!!GY!B!!!!!YR!G!!!!!!B!Y!B!!!!!!R!G!!!!!!!G!R!!!!B
*/
