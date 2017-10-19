#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int B=0,u=0,l=0,b=0,a=0,s=0,r=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='B')
        {
            B++;
        }
        else if(str[i]=='u')
        {
            u++;
        }
        else if(str[i]=='l')
        {
            l++;
        }
        else if(str[i]=='b')
        {
            b++;
        }
        else if(str[i]=='a')
        {
            a++;
        }
        else if(str[i]=='s')
        {
            s++;
        }
        else if(str[i]=='r')
        {
            r++;
        }
    }
    u = u/2;
    a = a/2;
    int arr[] = {B,u,l,b,a,s,r};
    int miN = B;
    if(B==0 || u==0 || l==0 || b==0 || a==0 || s==0 || r==0)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=0;i<7;i++)
        {
            if(arr[i]<miN)
                miN = arr[i];
        }
        cout<<miN<<endl;
    }


    return 0;
}
