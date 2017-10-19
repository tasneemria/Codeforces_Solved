#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int maX=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(maX<a[i])
        {
            maX = a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
         cnt = cnt+maX-a[i];
    }
    cout<<cnt<<endl;

    return 0;
}
