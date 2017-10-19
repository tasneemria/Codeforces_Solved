#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int cnt = 0;
    int a,b;
    for(int i=1;;i++)
    {
        a = n*i;
        b = m*i;
        if(a>z || b>z)
            break;
        if(b>a)
        {
            if(b%n==0)
            {
                cnt++;
            }
        }
        else if(a>b)
        {
            if(a%m==0)
            {
                cnt++;
            }
        }
        else
        {
            if(a%m==0)
                cnt++;
        }
    }

    cout<<cnt<<endl;


    return 0;
}
