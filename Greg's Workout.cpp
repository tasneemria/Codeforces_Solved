#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int inp,chest=0,biceps=0,bak=0;
    for(int i=1; i<=n; i++)
    {
        cin>>inp;
        if(i%3==1)
        {
            chest+=inp;
        }
        else if(i%3==2)
        {
            biceps+=inp;
        }
        else
        {
            bak+=inp;
        }
    }
    if(chest>biceps && chest>bak)
    {
        cout<<"chest"<<endl;
    }
    else if(biceps>chest && biceps>bak)
    {
        cout<<"biceps"<<endl;
    }
    else
    {
        cout<<"back"<<endl;
    }

    return 0;
}
