#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int five=0,zero=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==5) five++;
        else if(a==0) zero++;
    }

    if(zero==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(five<9)
        {
            cout<<0<<endl;
        }
        else
        {
            while(five>=9)
            {
                cout<<"555555555";
                five-=9;
            }
            while(zero)
            {
                cout<<0;
                zero--;
            }
        }
    }

    return 0;
}
