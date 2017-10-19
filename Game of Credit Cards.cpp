#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char sr[n+1],mr[n+1];
    cin>>sr>>mr;
    sort(mr,mr+n);
    string save;
    save = mr;
    int maxcnt=0,mincnt=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sr[i]<mr[j])
            {
                mr[j] = '*';
                maxcnt++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sr[i]<=save[j])
            {
                save[j] = '*';
                mincnt--;
                break;
            }
        }
    }
    cout<<mincnt<<endl;
    cout<<maxcnt<<endl;

    return 0;
}
