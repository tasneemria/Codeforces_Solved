#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,c=0,g=0,t=0,ques=0,na,nc,ng,nt;
    int arr[5] = {0,0,0,0,0};
    char narr[] = {'A','C','G','T'};
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
            arr[0] = ++a;
        }
        else if(str[i]=='C')
        {
            arr[1] = ++c;
        }
        else if(str[i]=='G')
        {
            arr[2] = ++g;
        }
        else if(str[i]=='T')
        {
            arr[3] = ++t;
        }
        else if(str[i]=='?')
        {
            arr[4] = ++ques;
        }
    }
    int maX=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]>maX)
            maX = arr[i];
    }
    na = maX-arr[0];
    nc = maX-arr[1];
    ng = maX-arr[2];
    nt = maX-arr[3];

    int extra = n-(na+a)-(nc+c)-(ng+g)-(nt+t);
    if(n%4!=0)
        cout<<"==="<<endl;
    else if(extra%4!=0 || extra<0)
        cout<<"==="<<endl;
    else if(n%4==0)
    {
        na = na+extra;
        nc = nc+extra;
        ng = ng+extra;
        nt = nt+extra;
        int cnt = 0;
        for(int i=0;(i<n) && na;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'A';
                na--;
            }
        }
        for(int i=0;(i<n) && nc;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'C';
                nc--;
            }
        }
        for(int i=0;(i<n) && ng;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'G';
                ng--;
            }
        }
        for(int i=0;(i<n) && nt;i++)
        {
            if(str[i]=='?')
            {
                str[i] = 'T';
                nt--;
            }
        }
        cout<<str<<endl;
    }

    return 0;
}
