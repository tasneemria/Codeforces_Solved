#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    double misha,vasya,calc1,calc2;
    calc1 = (3*a)/10;
    calc2 = a - (a/250)*c;
    misha = max(calc1,calc2);
    calc1 = (3*b)/10;
    calc2 = b - (b/250)*d;
    vasya = max(calc1,calc2);

    if(misha>vasya)
    {
        cout<<"Misha"<<endl;
    }
    else if(misha<vasya)
    {
        cout<<"Vasya"<<endl;
    }
    else
    {
        cout<<"Tie"<<endl;
    }

    return 0;
}
