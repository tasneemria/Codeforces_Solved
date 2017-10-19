#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    arr[0] = 3;

    int cnt = 0;

    for(int i=1;i<=n;)
    {
        if(arr[i]==1)
        {
            cnt++;
            i++;
        }
        else if(arr[i]==0)
        {
            if(arr[i-1]==1 && arr[i+1]==1)
            {
                cnt+=2;
                i+=2;
            }
            else
            {
                i++;
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}
