#include<bits/stdc++.h>
using namespace std;

int arr[1000001];



int main()
{
    arr[1] = 0;
    for(int i=2;i<=1000000;i++)
    {
        arr[i] = 1;
    }
    for(int i=2;i<=1000;i++)
    {
        for(int j=i*i,k=0;;k++)
        {
            int calc = j+k*i;
            if(calc>1000000)
            {
                break;
            }
            arr[calc] = 0;
        }
    }

    long long n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        double sqr = sqrt(x);
        double an = ceil(sqr);

        //cout<<sqr<<" "<<an<<endl;

        if(sqr==an)
            x = (long long)sqr;
        else
            x = 1;

        //cout<<x<<endl;

        if(arr[x]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
