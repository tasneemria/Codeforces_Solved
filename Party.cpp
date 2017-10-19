#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        cout<<max(0,n-2)<<endl;
    }

    return 0;
}
