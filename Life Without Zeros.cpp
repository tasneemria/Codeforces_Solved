#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s3;
    //s2 = s3;
    if(s1.length()<s3.length())
    {
        s2 = s3;
        //for s2 = s1
        for(int i=0;i<s3.length()-s1.length();i++)
        {
            s2[i] = '0';
        }
        for(int i=s3.length()-s1.length(),j=0;j<s1.length();i++,j++)
        {
            s2[i] = s1[j];
        }
    }
    if(s1.length()>s3.length())
    {
        s2 = s1;
        //for s2 = s3
        for(int i=0;i<s1.length()-s3.length();i++)
        {
            s2[i] = '0';
        }
        for(int i=s1.length()-s3.length(),j=0;j<s3.length();i++,j++)
        {
            s2[i] = s3[j];
        }
    }

    return 0;
}
