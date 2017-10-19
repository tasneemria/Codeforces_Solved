#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(str[0]=='0')
    {
        cout<<1<<endl;
        return 0;
    }
    int calc = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            break;
        }
        calc++;
    }

    if(calc<n)
    {
        cout<<calc+1<<endl;
    }
    else if(calc==n)
    {
        cout<<calc<<endl;
    }

    return 0;
}
