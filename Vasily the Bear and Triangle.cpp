#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int x1,x2,y1,y2;
    if(x>0 && y>0)
    {
        x1 = 0;
        x2 = y+x;
        y1 = y+x;
        y2 = 0;
    }
    else if(x>0 && y<0)
    {
        x1 = 0;
        x2 = x-y;
        y1 = y-x;
        y2 = 0;
    }
    else if(x<0 && y>0)
    {
        x1 = x-y;
        x2 = 0;
        y1 = 0;
        y2 = y-x;
    }
    else if(x<0 && y<0)
    {
        x1 = x+y;
        x2 = 0;
        y1 = 0;
        y2 = x+y;
    }

    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;

    return 0;
}
