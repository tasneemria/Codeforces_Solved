#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int flag = 0,sum = b;
    for(int i=0;i<=10000;i++)
    {
        sum = b+i*a;
        if((sum-d)%c==0 && (sum-d)>=0)
        {
            flag = 1;
            cout<<sum<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }

    return 0;
}
