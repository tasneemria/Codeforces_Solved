#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,m;
    cin>>n>>m;
    int arr[n],newarr[n];
    int home = -1,total = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        newarr[i] = 0;
    }

    while(1)
    {
        for(int i=0; i<n; i++)
        {
            if(newarr[i]>=0)
            {
                newarr[i]+=m;
            }
            if(newarr[i]>=arr[i])
            {
                total++;
                newarr[i] = home;
                home--;
            }
        }

        if(total==n) break;
    }

    for(int i=0; i<n; i++)
    {
        if(newarr[i]==home+1) cout<<i+1<<endl;
    }

    return 0;
}
