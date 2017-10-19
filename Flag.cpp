#include<iostream>
using namespace std;

int main()
{
    int n,m;
    bool ans = true;
    char a='w',b='q';
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        //cout<<"one"<<endl;
        cin>>a;
        if(a==b)
            ans = false;
        for(int j=1;j<=m-1;j++)
        {
          //  cout<<"two"<<endl;
            cin>>b;
            if(a!=b)
                ans = false;
        }
    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
