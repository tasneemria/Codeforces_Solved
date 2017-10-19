#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<int> vc;
    int cnt = 0,flag = 0;
    for(int i=0;i<n;i++)
    {
        flag = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1 || arr[i][j]==3)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cnt++;
            vc.push_back(i+1);
        }
    }

    cout<<cnt<<endl;
    vector<int>::iterator it;

    for(it = vc.begin();it!=vc.end();it++)
    {
        cout<<*it<<" ";
    }
    //cout<<endl;

    return 0;
}
