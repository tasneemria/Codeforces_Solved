#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    double result,match;
    cin>>a>>b>>c;
    match = b*b-4*a*c;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
                cout<<-1<<endl;
            else
                cout<<0<<endl;
        }
        else
        {
            result = -c/b;
            cout<<1<<endl;
            printf("%.5lf",result);
            cout<<endl;
        }
    }
    else if(match<0)
    {
        cout<<0<<endl;
    }
    else if(match==0)
    {
        result = -b/(2*a);
        cout<<1<<endl;
        printf("%.5lf",result);
        cout<<endl;
    }
    else if(match>0)
    {
        //cout<<"b^-4ac "<<match<<endl;
        double r1 = (-b+sqrt(match))/(2*a);
        double r2 = (-b-sqrt(match))/(2*a);
        cout<<2<<endl;
        if(r1>r2)
        {
            printf("%.5lf",r2);
            cout<<endl;
            printf("%.5lf",r1);
        }
        else
        {
            printf("%.5lf",r1);
            cout<<endl;
            printf("%.5lf",r2);
        }

    }

    return 0;
}

