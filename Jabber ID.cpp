#include<iostream>
#include<string.h>

using namespace std;

int checkUser(int pos,string str)
{
    for(int i=0; i<pos; i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]=='_' || (str[i]>='0' && str[i]<='9'))
        {
            continue;
        }
        else
            return 0;
    }
    return 1;
}

int checkHost(int pos1,int pos2,string str)
{
    int i,j,k,len=pos1-1;
    for(i=pos1; i<=pos2;)
    {
        if(str[pos2]=='.')
            return 0;
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]=='_' || (str[i]>='0' && str[i]<='9'))
        {
            i++;
            continue;
        }
        else if(str[i]=='.')
        {
            if(i-len<=1 || i-len>17)
                return 0;
            len=i;
            i++;
        }
        else
            return 0;
    }
    return 1;
}

int checkRes(int pos1,int pos2,string str)
{
    for(int i=pos1; i<pos2; i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]=='_' || (str[i]>='0' && str[i]<='9'))
        {
            continue;
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    string inpstr;
    cin>>inpstr;
    int U=0,H=0,R=0;
    int lenUser,lenHost,lenRes;
    for(int i=inpstr.length()-1; i>=0; i--)
    {
        if(inpstr[i]=='@')
        {
            lenUser = i;
            break;
        }
    }
    int k;
    for(k=lenUser+1; k<inpstr.length(); k++)
    {
        if(inpstr[k]=='/')
        {
            lenHost = k-lenUser-1;
            break;
        }
    }
    if(k==inpstr.length())
    {
        lenHost = k-lenUser-1;
        lenRes = 0;
    }
    else
    {
        lenRes = inpstr.length()-lenUser-lenHost-2;
    }

    if((lenUser<1 || lenUser>16) || (lenHost<1 || lenHost>32))
    {
        U = 0;
        H = 0;
    }
    else
    {
        if(lenRes==0)
        {
            if(checkUser(lenUser,inpstr)==1)
                U = 1;
            if(checkHost(lenUser+1,lenHost+lenUser,inpstr)==1)
                H = 1;
            if(inpstr[inpstr.length()-1]!='/')
                R = 1;
        }
        else if(lenRes<1 || lenRes>16)
        {
            R = 0;
        }
        else
        {
           // cout<<"fe"<<endl;
            if(checkUser(lenUser,inpstr)==1)
            {
             //   cout<<"User"<<endl;
                U = 1;
            }
            if(checkHost(lenUser+1,lenHost+lenUser,inpstr)==1)
            {
               // cout<<"HOst"<<endl;
                H = 1;
            }
            if(checkRes(lenHost+lenUser+2,inpstr.length(),inpstr)==1)
            {
                //cout<<"Res"<<endl;
                R = 1;
            }
        }
    }

    if(U==1 && H==1 && R==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

//    cout<<lenUser<<endl;
//    cout<<lenHost<<endl;
//    cout<<lenRes<<endl;

    return 0;
}
