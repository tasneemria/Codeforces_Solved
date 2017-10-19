#include<iostream>

using namespace std;

int main()
{
    int n,p1,p2,p3,t1,t2,arr[100][2];
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    int power=0,diff;
    //i==n er jonno ekta check likhte hobe
    for(int i=0;i<n;i++)
    {
        power = power+(arr[i][1]-arr[i][0])*p1;
        if(i==n-1)
            break;
        diff = arr[i+1][0]-arr[i][1];
        if(diff>t1)
        {
            power = power+t1*p1;
            diff = diff-t1;
            if(diff>t2)
            {
                power = power+t2*p2;
                diff = diff-t2;
                power = power+diff*p3;
            }
            else if(diff<=t2)
            {
                power = power+diff*p2;
            }
        }
        else if(diff<=t1)
        {
            power = power+diff*p1;
        }
    }
    cout<<power;
    return 0;
}
