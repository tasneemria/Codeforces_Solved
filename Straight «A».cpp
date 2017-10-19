#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    double n,k,saven;
    cin>>n>>k;
    saven = n;
    double total=0,inp,result;
    for(int i=0; i<n; i++)
    {
        cin>>inp;
        total+=inp;
    }
    result = total/n;

    if(ceil(result-0.49999999999)==k)
    {
        cout<<0<<endl;
    }
    else
    {
        int counter = 1;
        while(1)
        {
            n++;
            result = (total+k*counter)/n;
            //cout<<result<<endl;
            if(ceil(result-.49999999999)==k) break;
            counter++;
        }
        cout<<counter<<endl;
    }

    return 0;
}
