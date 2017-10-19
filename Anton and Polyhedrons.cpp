#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    int n,sum=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        sum+=mp[str];
    }
    cout<<sum<<endl;

    return 0;
}
