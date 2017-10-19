#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    int odd1 = 0,odd2 = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]%2) odd1++;
        if(arr[i][1]%2) odd2++;
    }

    if((odd1+odd2)%2==1)
    {
        cout<<-1<<endl;
    }
    else if(odd1+odd2==0 || (odd1%2==0 && odd2%2==0))
    {
        cout<<0<<endl;
    }
    else
    {
        //cout<<"ffffffffffff"<<endl;
        for(int i=0;i<n;i++)
        {
            if(((arr[i][0]%2)==0 && (arr[i][1]%2)==1) || ((arr[i][1]%2)==0 && (arr[i][0]%2)==1))
            {
                cout<<1<<endl;
                return 0;
            }
        }
        cout<<-1<<endl;
    }

    return 0;
}
