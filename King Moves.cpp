#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    if((str[0]>='b' && str[0]<='g') && (str[1]>='2' && str[1]<='7'))
    {
        cout<<8<<endl;
    }
    else if((str[0]>='b' && str[0]<='g') && (str[1]=='1' || str[1]=='8'))
    {
        cout<<5<<endl;
    }
    else if((str[0]=='a' || str[0]=='h') && (str[1]>='2' && str[1]<='7'))
    {
        cout<<5<<endl;
    }
    else
    {
        cout<<3<<endl;
    }

    return 0;
}
