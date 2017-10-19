#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    map<int,int> ishole;
    for(int i=0;i<m;i++)
    {
        int a;
        scanf("%d",&a);
        ishole[a] = 1;
    }
    int bone = 1;
    for(int i=0;i<k;i++)
    {
        int a,b;
        if(ishole[bone]) break;
        scanf("%d%d",&a,&b);
        if(a==bone) bone = b;
        else if(b==bone) bone =a;
    }

    cout<<bone<<endl;

    return 0;
}
