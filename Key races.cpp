#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f,s;
    int num,v1,v2,t1,t2;
    cin>>num>>v1>>v2>>t1>>t2;

    f = 2*t1+num*v1;
    s = 2*t2+num*v2;

    if(f<s)
    {
        cout<<"First"<<endl;
    }
    else if(f>s)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}
