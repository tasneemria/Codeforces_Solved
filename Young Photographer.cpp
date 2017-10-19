#include<iostream>
using namespace std;

int main()
{
    int n,x;
    int a,b,lArr[100],rArr[100];
    int maximum=-40,minimum=2000;
    cin>>n>>x;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            lArr[i] = a;
            rArr[i] = b;
        }
        else
        {
            lArr[i] = b;
            rArr[i] = a;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(maximum<lArr[i])
        {
            maximum = lArr[i];
        }
        if(minimum>rArr[i])
        {
            minimum = rArr[i];
        }
    }

    //cout<<"max "<<maximum<<endl;
    //cout<<"min "<<minimum<<endl;

    if(maximum>minimum)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(x>=maximum && x<=minimum)
        {
            cout<<0<<endl;
        }
        else if(x<maximum)
            cout<<maximum-x<<endl;
        else if(x>minimum)
            cout<<x-minimum<<endl;

    }

    return 0;
}
