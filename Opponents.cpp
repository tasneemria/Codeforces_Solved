#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,d;
    cin>>n>>d;
    char arr[n+1];
    for(int i=0;i<n;i++)
        arr[i] = '1';
    arr[n] = '\0';
    string str;
    //char str[n+1];
    int ans = 0,mx = 0;
    for(int i=0;i<d;i++)
    {
        cin>>str;
        if(str==arr)
        {
            ans = 0;
        }
        else
        {
            ans++;
        }
        if(mx<ans) mx = ans;
    }
    cout<<mx<<endl;

    return 0;
}
