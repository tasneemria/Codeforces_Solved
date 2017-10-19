#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx[3],mn[3],out[3],total = 0;
    for(int i=0; i<3; i++)
    {
        cin>>mn[i]>>mx[i];
        out[i] = mn[i];
        total+=out[i];
        mn[i] = mx[i]-mn[i];
    }

    for(int i=0;i<3;i++)
    {
        total+=mn[i];
        out[i]+=mn[i];
        if(total>n)
        {
            out[i]-=(total-n);
            break;
        }
    }

    cout<<out[0]<<" "<<out[1]<<" "<<out[2]<<endl;


    return 0;
}
