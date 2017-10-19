#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int miN = n-1,a,b;
    int geta,getb;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a = i;
            b = n/i;
            if(a>b)
                break;
            if(miN>=(b-a))
            {
                geta = a;
                getb = b;
                miN = b-a;
            }
        }
    }
    cout<<geta<<" "<<getb<<endl;

    return 0;
}
