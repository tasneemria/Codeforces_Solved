#include<iostream>

using namespace std;

int main()
{
    int y,w,prob,Max=0;
    cin>>y>>w;
    Max = y;
    if(Max<w)
        Max = w;
    prob = 6-Max+1;
    if(prob==6)
        cout<<"1/1";
    else if(prob==5)
        cout<<"5/6";
    else if(prob==4)
        cout<<"2/3";
    else if(prob==3)
        cout<<"1/2";
    else if(prob==2)
        cout<<"1/3";
    else if(prob==1)
        cout<<"1/6";


    return 0;
}
