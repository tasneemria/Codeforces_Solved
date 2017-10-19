#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a1,a2;
    cin>>a1>>a2;
    int mn,mx;
    mn = min(a1,a2);
    mx = max(a1,a2);
    mn = mn+1;
    mx = mx-2;
    if(mn<0 || mx<0)
    {
        cout<<0<<endl;
        return 0;
    }
    //cout<<mn<<" "<<mx<<endl;
    for(i=1;; i++)
    {
        if(mn==0 || mx==0)
        {
            break;
        }

        if(mn>mx)
        {
            mn-=2;
            mx++;
        }
        else
        {
            mx-=2;
            mn++;
        }

        //cout<<i<<endl;
        //cout<<mn<<" "<<mx<<endl;
    }

    cout<<i<<endl;

    return 0;
}
