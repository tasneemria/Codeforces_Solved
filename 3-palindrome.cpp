#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1 = "bba",s2 = "abb", s3 = "aab", s4 = "baa";
    int div = n/3;
    int mod = n%3;
    int mark = 1;
    for(int i=1; i<=div;)
    {
        for(int j=i; j<=i+3 && j<=div; j++)
        {
            if(j%4==1)
            {
                cout<<s1;
                mark = 1;
            }
            else if(j%4==2)
            {
                cout<<s2;
                mark = 2;
            }
            else if(j%4==3)
            {
                cout<<s3;
                mark = 3;
            }
            else if(j%4==0)
            {
                cout<<s4;
                mark = 4;
            }
        }
        i = i+4;
    }
    if(mod==1)
    {
        if(mark==1  || mark==2)
            cout<<"a";
        else if(mark==3 || mark==4)
            cout<<"b";
    }
    if(mod==2)
    {
        if(mark==1)
            cout<<"ab";
        else if(mark==2)
            cout<<"aa";
        else if(mark==3)
            cout<<"ba";
        else if(mark==4)
            cout<<"bb";
    }
        return 0;
}
