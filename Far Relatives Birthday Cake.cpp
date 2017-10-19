#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch[n][n];
    int perrw=0,hap=0;
    for(int i=0;i<n;i++)
    {
        perrw=0;
        for(int j=0;j<n;j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='C') perrw++;
        }
        hap+=((perrw*(perrw-1))/2);
    }

    for(int i=0;i<n;i++)
    {
        perrw=0;
        for(int j=0;j<n;j++)
        {
            if(ch[j][i]=='C') perrw++;
        }
        hap+=((perrw*(perrw-1))/2);
    }

    cout<<hap<<endl;

    return 0;
}
