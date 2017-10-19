#include<bits/stdc++.h>
using namespace std;

bool sortcol(const vector<long long>& v1,const vector<long long>& v2)
{
    return v1[0]<v2[0];
}

int main()
{
    long long n,d;
    cin>>n>>d;
    vector< vector<long long> > arr;
    arr.resize(n,vector<long long>(2));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    sort(arr.begin(),arr.end(),sortcol);

    long long high = 0;
    long long calc = 0;
    long long j=0,k=0;
    while(j<=k && k<n)
    {
        if(arr[k][0]-arr[j][0]<d)
        {
            calc+=arr[k][1];
            k++;
        }
        else
        {
            if(calc>high)
            {
                high = calc;
            }
            calc-=arr[j][1];
            j++;
        }
    }
    if(calc>high)
    {
        high = calc;
    }

    cout<<high<<endl;


    return 0;
}
