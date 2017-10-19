#include<iostream>
#include<conio.h>

using namespace std;

int p[2000][2000];

int knapsack(int *w,int *val,int n,int KnapW)
{

	for(int i=0;i<=KnapW;i++)
    {
        p[0][i] = 0;
    }
    for(int i=0;i<=n;i++)
    {
        p[i][0] = 0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=KnapW;j++)
        {
            //cout<<"nested for"<<endl;
            if(j>=w[i])
            {
                //cout<<"1st case"<<endl;
                if( (val[i]+p[i-1][j-w[i]]) > p[i-1][j])
                {
                    p[i][j] = val[i]+p[i-1][j-w[i]];
                    //cout<<"i "<<i<<" j "<<j<<" "<<p[i][j]<<endl;
                }
                else
                {
                    p[i][j] = p[i-1][j];
                  //  cout<<"i "<<i<<" j "<<j<<" "<<p[i][j]<<endl;
                }
                //p[i][j] = max(val[i]+p[i-1][KnapW-w[i]],p[i-1][j]);
            }
            else
            {
                p[i][j] = p[i-1][j];
                //cout<<"i "<<i<<" j "<<j<<" "<<p[i][j]<<endl;
            }
        }
    }
    return p[n][KnapW];
}

int main()
{
    int w[1000];
    int val[1000];
    //long long totalV=0;
    int N;
    int W = 0;
    w[0] = 0;
    val[0] = 0;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>w[i]>>val[i];
        W+=w[i];
//        if(W<w[i])
//            W = w[i];
    }
    //cin>>W;

    //long long calc = knapsack(w,val,N,W);
    cout<<knapsack(w,val,N,W)<<endl;

	return 0;
}

/*
3
17 72
23 44
24 31
26

4
2 12
1 10
3 20
2 15
5
*/







