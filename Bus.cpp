#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,f,k,mx;
    cin>>a>>b>>f>>k;
    mx = max(f,a-f);

    long long refil = 0, fuel,prev = 0;
    fuel = b;

    for(int i=1;i<=k;i++)
    {
        if(i%2==1)
        {
            if(fuel>=f)
            {
                fuel-=f;
            }
            else if(prev==0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else if(fuel<f && prev)
            {
                refil++;
                fuel = b;
                fuel-=(2*f);
                if(fuel<0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
            }

            if(fuel>=a-f)
            {
                fuel-=(a-f);
            }
            else
            {
                refil++;
                fuel = b;
                if(fuel<(a-f))
                {
                    cout<<-1<<endl;
                    return 0;
                }
                fuel-=(a-f);
            }
        }
        else if(i%2==0)
        {
            prev = 1;
            if(fuel>=(a-f))
            {
                fuel-=(a-f);
            }
            else
            {
                refil++;
                fuel = b;
                fuel-=2*(a-f);
                if(fuel<0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
            }

            if(fuel>=f)
            {
                fuel-=f;
            }
            else
            {
                refil++;
                fuel = b;
                fuel-=f;
            }
        }
    }

    cout<<refil<<endl;

    return 0;
}
