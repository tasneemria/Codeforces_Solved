#include<bits/stdc++.h>
using namespace std;

bool sortcol( const vector<int>& v1, const vector<int>& v2 )
{
    return v1[0] < v2[0];
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int> > arr;
    arr.resize(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0];
        arr[i][1] = i;
    }
    sort(arr.begin(),arr.end(),sortcol);
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        cout<<arr[i][1]+1<<" "<<arr[j][1]+1<<endl;
    }

    return 0;
}
