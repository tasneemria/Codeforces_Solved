#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int first=-1,sum = 1,second = str.length(),flag=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y')
        {
            flag = 1;
            first = i;
            sum+=first;
            break;
        }
    }
    int mx = sum;
    for(int i=first+1;i<str.length();i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y')
        {
            second = i;
            sum = second-first;
            first = second;
            if(mx<sum)
                mx = sum;
        }
    }
    second = str.length()-first;
    if(mx<second)
        mx = second;
    cout<<mx<<endl;

    return 0;
}
//ABABBBACFEYUKOTT
//AAA
