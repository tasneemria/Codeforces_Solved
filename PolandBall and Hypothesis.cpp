#include<bits/stdc++.h>
using namespace std;

int arr[1000001];

int main()
{
    long long n;
    cin>>n;

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

    for(int i=1;i<=1000;i++)
    {
        if(arr[n*i+1]==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }








    return 0;
}
