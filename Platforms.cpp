#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    long long d,m,l;
    cin>>n>>d>>m>>l;

    long long k;
    long long first,second,modV,prevf,prevs;
    first = 0;
    second = l;
    //long long ans;

    //cout<<0<<" "<<l<<endl;

    for(k=1;k<n;k++)
    {
        first = k*m;
        second = k*m+l;
        prevf = (k-1)*m;
        prevs = (k-1)*m+l;
        //cout<<prevf<<" "<<prevs<<endl;
        //cout<<first<<" "<<second<<endl;
        modV = prevs%d;
//        if(modV>=prevf && modV<=prevs)
//        {
//            continue;
//        }
        if((prevs+d-modV)>=first && (prevs+d-modV)<=second)
        {
            continue;
        }
        else
        {
            cout<<prevs+d-modV<<endl;
            break;
        }
    }

    if(k==n)
    {
        cout<<"Prob..."<<endl;
        cout<<second-(second%d)+d<<endl;
    }


    return 0;
}
