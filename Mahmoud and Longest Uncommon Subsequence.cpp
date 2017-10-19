#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    if(a.length()>b.length())
    {
        cout<<a.length()<<endl;
    }
    else if(b.length()>a.length())
    {
        cout<<b.length()<<endl;
    }
    else if(a==b)
    {
        cout<<-1<<endl;
    }
    else if(a.length()==b.length())
    {
        cout<<a.length()<<endl;
    }

    return 0;
}
