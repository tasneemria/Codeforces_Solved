#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[10],s2[10];
    cin>>s1>>s2;
    int len = strlen(s1);
    sort(s1,s1+len);
    if(s1[0]=='0')
    {
        for(int i=1;i<strlen(s1);i++)
        {
            if(s1[i]!=0)
            {
                char c = s1[i];
                s1[0] = c;
                s1[i] = '0';
                break;
            }
        }
        if(strcmp(s1,s2)==0)
            cout<<"OK"<<endl;
        else
            cout<<"WRONG_ANSWER"<<endl;
    }
    else if(strcmp(s1,s2)==0)
        cout<<"OK"<<endl;
    else if(strcmp(s1,s2)!=0)
        cout<<"WRONG_ANSWER"<<endl;

    return 0;
}
