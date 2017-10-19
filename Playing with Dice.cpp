#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int one = 0,draw = 0,two = 0;
    for(int i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
        {
            one++;
        }
        else if(abs(a-i)>abs(b-i))
        {
            two++;
        }
        else
        {
            draw++;
        }
    }
    cout<<one<<" "<<draw<<" "<<two<<endl;

    return 0;
}
