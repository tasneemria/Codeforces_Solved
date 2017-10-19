#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int m,s;
    cin>>m>>s;
    int minarr[101],maxarr[101];
    int sum=0,pos=0,pos1=0,saves=s,savem=m;
    if((s==0 && m>1) || s>(9*m))
        cout<<-1<<" "<<-1<<endl;
    else if(s<10)
    {
        minarr[pos1++] = 1;
        while(m)
        {
            //cout<<"pos "<<pos<<endl;
            maxarr[pos++] = s;
            //cout<<maxarr[pos-1]<<endl;
            minarr[pos1++] = 0;
            sum = s;
            m--;
            s = s-sum;
        }
        minarr[pos-1] = saves-1;
        if(savem==1)
            minarr[0] = saves; // :D :D
    }
    else
    {
        sum = 0;
        while(m)
        {
            if(sum==s)
            {
                maxarr[pos++] = 0;
                //pos++;
            }
            if(s-sum>9)
            {
                maxarr[pos++] = 9;
                sum+=9;
            }
            else if(s!=sum)
            {
                maxarr[pos++] = s-sum;
                sum = s;
            }
            m--;
        }

        if(s>=10)
        {
            int nzro,zero=0;
            if(maxarr[pos-1]!=0)
            {
                for(int i=pos-1; i>=0; i--)
                {
                    minarr[pos1++] = maxarr[i];
                }
            }
            else
            {
                for(int i=pos-1; i>=0; i--)
                {
                    if(maxarr[i]!=0)
                    {
                        nzro = i;
                        break;
                    }
                    else
                        zero++;
                }
                minarr[pos1++] = 1;
                for(int i=0; i<zero-1; i++)
                {
                    minarr[pos1++] = 0;
                }
                minarr[pos1++] = maxarr[nzro] - 1;
                if(pos1<pos)
                {
                    for(int i=nzro-1; i>=0; i--)
                    {
                        minarr[pos1++] = maxarr[i];
                    }
                }
            }
        }
    }



    for(int i=0; i<pos; i++)
        cout<<minarr[i];
    cout<<" ";

    for(int i=0; i<pos; i++)
        cout<<maxarr[i];
    cout<<endl;

    return 0;
}
