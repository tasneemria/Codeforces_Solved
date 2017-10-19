#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n,m,k;
    cin>>n>>m>>k;
    double lane,desk;
    double t = k/(m*2);
    lane = ceil(t);

    double t1 = (k-((lane-1)*m*2))/2;
    //cout<<t<<" "<<t1<<endl;

    desk = ceil(t1);
    cout<<lane<<" "<<desk<<" ";
    if(((int)(k)%(int)(m*2))%2==1)
        cout<<"L"<<endl;
    else
        cout<<"R"<<endl;

    return 0;
}
