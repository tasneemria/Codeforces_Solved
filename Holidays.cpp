#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int maX,miN;
    if(n%7==0)
    {
        maX = (n/7)*2;
        miN = (n/7)*2;
        cout<<miN<<" "<<maX<<endl;
    }
    else
    {
        int mod = n%7;
        if(mod==1)
        {
            maX = ((n/7)*2)+1;
            miN = (n/7)*2;
            cout<<miN<<" "<<maX<<endl;
        }
        else if(mod==6)
        {
            maX = ((n/7)*2)+2;
            miN = (n/7)*2+1;
            cout<<miN<<" "<<maX<<endl;
        }
        else
        {
            maX = ((n/7)*2)+2;
            miN = (n/7)*2;
            cout<<miN<<" "<<maX<<endl;
        }
    }

    return 0;
}
