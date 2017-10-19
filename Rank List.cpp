#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> vct;
    map<pair<int,int>,int> mp;
    for(int i=0;i<n;i++)
    {
        pair<int,int> pr;
        int a,b;
        cin>>a>>b;
        pr = make_pair(a,b);
        vct.push_back(pr);
        mp[pr]++;
    }
    sort(vct.begin(),vct.end());
    reverse(vct.begin(),vct.end());
    vector< pair< int,int > > :: iterator it;
    map<pair<int,int>,int> :: iterator mpit;
//    for(mpit=mp.begin();mpit!=mp.end();mpit++)
//    {
//        cout<<(mpit->first).first<<" "<<(mpit->first).second<<endl;
//        cout<<mpit->second<<endl;
//    }

    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        arr1[i] = vct[i].first;
        arr2[i] = vct[i].second;
        //cout<<arr1[i]<<" "<<arr2[i]<<endl;
    }
    int ii,jj;
    for(ii=0;ii<n;)
    {
        for(jj=ii+1;jj<n;jj++)
        {
            if(arr1[ii]!=arr1[jj])
            {
                break;
            }
        }
        sort(arr2+ii,arr2+jj);
        ii = jj;
    }

//    for(int i=0;i<n;i++)
//    {
//        arr1[i] = vct[i].first;
//        arr2[i] = vct[i].second;
//        cout<<arr1[i]<<" "<<arr2[i]<<endl;
//    }

    //pair<int,int> par;
   // par = make_pair(arr1[k-1],arr2[k-2]);
    //cout<<arr1[k-1]<<" "<<arr2[k-1]<<endl;
    for(mpit=mp.begin();mpit!=mp.end();mpit++)
    {
      //  cout<<(mpit->first).first<<" "<<(mpit->first).second<<endl;

        if((mpit->first).first==arr1[k-1] && (mpit->first).second==arr2[k-1])
        {
            cout<<mpit->second<<endl;
            break;
        }
    }

    return 0;
}



