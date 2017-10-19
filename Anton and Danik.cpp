#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d=0,a=0,n;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='D')
            d++;
        else
            a++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;

    return 0;
}
