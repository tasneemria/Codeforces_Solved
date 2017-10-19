#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1,b1,c1,a2,b2,c2;
    int i,j,k;
    double m1,m2;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;

    if(a1==0 && b1==0 && c1!=0) cout<<"0";
    else if(a2==0 && b2==0 && c2!=0) cout<<"0";
    else if(a2==0 && b2==0 && c2==0) cout<<"-1";
    else if(a1==0 && b1==0 && c1==0) cout<<"-1";

    else
    {
        double det;
        det = a1*b2-a2*b1;
        if(det==0)
        {
            if(b1*c2-c1*b2 == 0 && a2*c1-a1*c2==0) cout<<"-1";
            else cout<<"0";
        }
        else cout<<"1";
    }

    return 0;

}
