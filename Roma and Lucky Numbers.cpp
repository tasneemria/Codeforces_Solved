#include<bits/stdc++.h>
//#include<conio.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //cout<<arr[0][0]<<endl;
    int cnt = 0,ans = 0;
    for(int i=0;i<n;i++)
    {
        cnt = 0;
        for(int j=0;j<arr[i].length();j++)
        {
            if(arr[i][j]=='4' || arr[i][j]=='7')
            {
                cnt++;
            }
            if(cnt>k)
            {
                break;
            }
        }
        if(cnt<=k)
        {
            ans++;
        }
    }

    cout<<ans<<endl;

 //   getch();

    return 0;
}
