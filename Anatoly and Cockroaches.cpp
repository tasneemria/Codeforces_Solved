#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int b=0,r=0;
    char corr[n+1],corr1[n+1];

    for(int i=0; i<n-1; i+=2)
    {
        corr[i] = 'b';
        corr[i+1] = 'r';
    }
    if(n%2==1)
        corr[n-1] = 'b';
    corr[n] = '\0';


    for(int i=0; i<n-1; i+=2)
    {
        corr1[i] = 'r';
        corr1[i+1] = 'b';
    }
    if(n%2==1)
        corr1[n-1] = 'r';
    corr1[n] = '\0';

    for(int i=0; i<n; i++)
    {
        if(str[i]!=corr[i])
        {
            if(corr[i]=='b')
                b++;
            else
                r++;
        }
    }
    int turn;
    turn = max(b,r);
    int turn1;
    b = 0;
    r = 0;
    for(int i=0; i<n; i++)
    {
        if(str[i]!=corr1[i])
        {
            if(corr1[i]=='b')
                b++;
            else
                r++;
        }
    }
    turn1 = max(b,r);
    if(turn<turn1)
    {
        cout<<turn<<endl;
    }
    else
    {
        cout<<turn1<<endl;
    }

    return 0;
}
