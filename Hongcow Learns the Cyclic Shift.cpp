#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    char ch;
    int i,j,k,l;
    int len = str.length();
    int save=0;
    string s1,s2;
    int cycle,flag=3;
    for(int k=1; k<len; k++)
    {
        if(str[0]!=str[k])
        {
            flag = 2;
            break;
        }
    }
    if(flag==2)
    {
        for(i=2; i<=len; i++)
        {
            flag = 0;
            if(len%i==0)
            {
                s1 = str.substr(0,len/i);
                for(j=len/i; j<=len-i; j+=(len/i))
                {
                    s2 = str.substr(j,j+i-1);
                    //cout<<s2<<endl;
                    if(s1==s2)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                cycle = i;
                break;
            }

        }
    }
    if(flag==3)
        cout<<1<<endl;
    else if(flag==1)
    {
        cout<<cycle<<endl;
    }
    else
        cout<<len<<endl;


    return 0;
}
