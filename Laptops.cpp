#include<bits/stdc++.h>
using namespace std;

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0]>v2[0];
}

int main()
{
    int n;
    cin>>n;
    vector<vector <int> > arr;
    arr.resize(n,vector<int> (2));
    for(int i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];

    sort(arr.begin(),arr.end(),sortcol);
    int flag = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i][0]>arr[i+1][0] && arr[i][1]<arr[i+1][1])
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;


    return 0;
}
