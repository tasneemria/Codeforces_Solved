#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dis;
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    if(x1==x2)
    {
        dis = fabs(y1-y2);
        cout<<x1+dis<<" "<<y1<<" "<<x2+dis<<" "<<y2<<endl;
    }
    else if(y1==y2)
    {
        dis = fabs(x1-x2);
        cout<<x1<<" "<<y1+dis<<" "<<x2<<" "<<y2+dis<<endl;
    }
    else
    {
        if(fabs(x1-x2)!=fabs(y1-y2)) cout<<-1<<endl;
        else    cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
    }

    return 0;
}
