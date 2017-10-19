#include<bits/stdc++.h>
using namespace std;

int arr[100000];
unordered_map< int,int > mp;
int color = 1;

int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n+1; i++)
    {
        arr[i] = 1;
        mp[i] = color;
    }
    for(int i=2; i*i<=n+2; i++)
    {
        color = 2;
        for(int j=i*i,k=0;; k++)
        {
            int calc = j+k*i;
            //cout<<calc<<endl;
            if(calc>n+1)
            {
                break;
            }
            arr[calc] = 0;
            mp[calc] = color;
        }
    }
    unordered_map< int,int >::iterator it;
    if(n<3)
        cout<<1<<endl;
    else
        cout<<color<<endl;
    for(int i=2; i<=n+1; i++)
    {
        cout<<mp[i]<<" ";
    }

    return 0;
}
