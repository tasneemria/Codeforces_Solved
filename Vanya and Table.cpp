#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x1,y1,x2,y2;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cnt+=(x2-x1+1)*(y2-y1+1);
    }

    cout<<cnt<<endl;


    return 0;
}
