#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int pos,neg;
    for(int i=0; i<m; i++)
    {
        map<int,int> posmp;
        map<int,int> negmp;
        pos = 0;
        neg = 0;
        int num,flag=0,mem;
        scanf("%d",&num);
        for(int j=0; j<num; j++)
        {
            scanf("%d",&mem);
            if(mem>0)
            {
                posmp[mem] = 1;
                pos++;
            }
            else
            {
                negmp[-mem] = 1;
                neg++;
            }
        }
        map<int,int>::iterator it;
        if(pos>=neg)
        {
            for(it=posmp.begin(); it!=posmp.end(); it++)
            {
                if(negmp[it->first]==1)
                {
                    flag = 1;
                    break;
                }
            }
        }
        else
        {
            for(it=negmp.begin(); it!=negmp.end(); it++)
            {
                if(posmp[it->first]==1)
                {
                    flag = 1;
                    break;
                }

            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
