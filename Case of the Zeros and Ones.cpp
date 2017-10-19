#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int zero=0,one=0;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
            zero++;
        else
            one++;
    }
    if(zero==one)
        cout<<n-(one*2)<<endl;
    else if(zero<one)
        cout<<n-(zero*2)<<endl;
    else
        cout<<n-(one*2)<<endl;

    return 0;
}
