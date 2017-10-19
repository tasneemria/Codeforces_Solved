#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            arr[i][j] = 0;
        }
    }
    vector<pair<int,int>> vct;
    map<int,int> rowmap;
    map<int,int> colmap;
    for(int i=0; i<k; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vct.push_back(make_pair(a,b));
        if(a==1)
        {
            rowmap[b] = c;
        }
        else
        {
            colmap[b] = c;
        }
    }
    for(int i=0; i<vct.size(); i++)
    {
        if(vct[i].first==1)
        {
            for(int j=0; j<m; j++)
            {
                arr[vct[i].second-1][j] = rowmap[vct[i].second];
            }
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                arr[j][vct[i].second-1] = colmap[vct[i].second];
            }
        }
    }

//    map<int,int>::iterator it;
//    for(it=rowmap.begin(); it!=rowmap.end(); it++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            arr[it->first-1][j] = it->second;
//        }
//    }
//
//    for(it=colmap.begin(); it!=colmap.end(); it++)
//    {
//        for(int i=0; i<n; i++)
//        {
//            arr[i][it->first-1] = it->second;
//        }
//    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
