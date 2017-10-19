#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    string c,d;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" "<<b<<endl;
        cin>>c>>d;
        if(a==c) a = d;
        else b = d;
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}
