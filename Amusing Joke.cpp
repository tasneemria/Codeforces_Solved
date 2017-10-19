#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int flag=1; //1 means YES
    int i,j;
    for(i=0;i<str1.length();i++)
    {
        for(j=0;j<str3.length();j++)
        {
            if(str1[i]==str3[j])
            {
                str3[j] = '*';
                break;
            }
        }
        if(j==str3.length())
        {
            flag = 0;
            break;
        }
    }
    for(i=0;i<str2.length();i++)
    {
        for(j=0;j<str3.length();j++)
        {
            if(str2[i]==str3[j])
            {
                str3[j] = '*';
                break;
            }
        }
        if(j==str3.length())
        {
            flag = 0;
            break;
        }
    }
    for(int k=0;k<str3.length();k++)
    {
        if(str3[k]!='*')
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else if(flag==0)
        cout<<"NO"<<endl;

    return 0;
}
