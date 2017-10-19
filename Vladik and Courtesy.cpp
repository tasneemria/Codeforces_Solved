#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c1=0,c2=0;
    cin>>a>>b;
    for(int i=1;;i+=2)
    {
        if(a<i) break;
        a-=i;
        c1++;
    }
    for(int i=2;;i+=2)
    {
        if(b<i) break;
        b-=i;
        c2++;
    }
    if(c1>c2) cout<<"Valera"<<endl;
    else if(c2>c1) cout<<"Vladik"<<endl;
    else cout<<"Vladik"<<endl;

    return 0;
}
