#include<iostream>

using namespace std;

int main()
{
    int n,d,arr[2000];
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int moves=0,calc,temp;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<=arr[i])
        {
            calc = arr[i]-arr[i+1]+1;
            temp = (calc+d-1)/d;
            moves = moves + temp;
            arr[i+1] = arr[i+1]+d*temp;
            //cout<<moves<<endl;
        }
    }
    cout<<moves;

    return 0;
}
