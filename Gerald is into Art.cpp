#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a1,b1,a2,b2,a3,b3;
    //cin>>a1>>b1>>a2>>b2>>a3>>b3;
    scanf("%d %d %d %d %d %d",&a1,&b1,&a2,&b2,&a3,&b3);
    int mx = max(a1,b1), mn = min(a1,b1);
    int fx,fy,lx,ly;
    fx = min(a2,b2);
    fy = max(a2,b2);
    lx = min(a3,b3);
    ly = max(a3,b3);

    //cout<<fx<<" "<<fy<<" "<<lx<<" "<<ly<<endl;
    if(fx==lx && fx<=mx)
    {
        if(fy+ly<=mn)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(fy+ly<=mx)
        {
            if(fx<=mn)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if((fx*2)<=mn || (fx*2)<=mx)
        {
            if((fy<=mn && ly<=mn) || (fy<=mx && ly<=mx))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(fx==ly && fx<=mx)
    {
        if(fy+lx<=mn)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(fy+lx<=mx)
        {
            if(fx<=mn)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if((fx*2)<=mn || (fx*2)<=mx)
        {
            if((fy<=mn && lx<=mn) || (fy<=mx && lx<=mx))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(fy==lx && fy<=mx)
    {
        if(fx+ly<=mn)
        {
            cout<<"YES"<<endl;
        }
        else if(fx+ly<=mx)
        {
            if(fy<=mn)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if((fy*2)<=mn || (fy*2)<=mx)
        {
            if((fx<=mn && ly<=mn) || (fx<=mx && ly<=mx))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(fy==ly && fy<=mx)
    {
        if(fx+lx<=mn)
        {
            cout<<"YES"<<endl;
        }
        else if(fx+lx<=mx)
        {
            if(fy<=mn)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if((fy*2)<=mn || (fy*2)<=mx)
        {
            if((fx<=mn && lx<=mn) || (fx<=mx && lx<=mx))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(fx+lx>mx)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        if(fy<=mn && ly<=mn)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(fy<=mx && ly<=mx)
        {
            if(fx+lx<=mn)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            return 0;
        }
    }
    // cout<<"NO"<<endl;

    return 0;
}
