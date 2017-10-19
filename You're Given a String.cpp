#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inpstr;
    cin>>inpstr;
    string str1,str2;

    int maxLen=0;
    int cnt = 0,pos;
    for(int i=1; i<inpstr.length(); i++)
    {
        for(int j=inpstr.length()-1; j>=i; j--)
        {
            str1 = inpstr.substr(i,j);
            str2 = inpstr;
            pos = str2.find(str1)+1;
            str2 = inpstr.substr(pos,inpstr.length()-1);
            if(str2.find(str1)!=-1)
            {
                if(maxLen<str1.length())
                {
                    maxLen = str1.length();
                }
            }

            str2 = inpstr.substr(0,pos);
            if(str2.find(str1)!=-1)
            {
                if(maxLen<str1.length())
                {
                    maxLen = str1.length();
                }
            }
        }
    }

    for(int i=inpstr.length()-1; i>0; i--)
    {
        str1 = inpstr.substr(0,i);
        str2 = inpstr.substr(1,inpstr.length());
        if(str2.find(str1)!= -1)
        {
            if(maxLen<str1.length())
                maxLen = str1.length();
        }


    }

    cout<<maxLen<<endl;

    return 0;
}
