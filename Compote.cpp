#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        if(b>=2*i && c>=4*i)
        {
            sum = i+2*i+4*i;
        }
        else if(b<2*i || c<4*i)
        {
            break;
        }
    }
    cout<<sum<<endl;

    return 0;
}
