#include<iostream>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[m+1];
    for(long long i=1;i<=m;i++)
        cin>>arr[i];

    long long house=1;
    long long mov = 0;
    for(long long i=1;i<=m;i++)
    {
        if(house<=arr[i])
        {
            mov = mov+arr[i]-house;
            house = arr[i];
        }
        else
        {
            mov = mov+n-(house-arr[i]);
            house = arr[i];
        }
    }

    cout<<mov<<endl;

    return 0;
}
