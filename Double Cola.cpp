#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int two=1,calc1=1,calc2;

    while(1)
    {
        calc2 = calc1+two*5;
        if(n>=calc1 && n<calc2)
            break;
        calc1 = calc2;
        two*=2;
    }
    int result;
    result = (n-calc1)/two;

    if(result==0)
        cout<<"Sheldon"<<endl;
    else if(result==1)
        cout<<"Leonard"<<endl;
    else if(result==2)
        cout<<"Penny"<<endl;
    else if(result==3)
        cout<<"Rajesh"<<endl;
    else if(result==4)
        cout<<"Howard"<<endl;

    return 0;
}
