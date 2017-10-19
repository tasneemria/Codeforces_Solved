#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][3] = {
                        0,1,2,
                        1,0,2,
                        1,2,0,
                        2,1,0,
                        2,0,1,
                        0,2,1
                    };
    long long n;
    int x;
    cin>>n>>x;
    cout<<arr[n%6][x]<<endl;

    return 0;
}
