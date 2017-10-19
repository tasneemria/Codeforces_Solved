#include<iostream>
using namespace std;

int main()
{
    int d,sumTime,maxT[30],minT[30],outArr[30],totalMax=0,totalMin=0;
    cin>>d>>sumTime;
    for(int i=0; i<d; i++)
    {
        cin>>minT[i];
        cin>>maxT[i];
        outArr[i] = minT[i];
        totalMax+=maxT[i];
        totalMin+=minT[i];
    }

    if(sumTime<totalMin)
    {
        cout<<"NO"<<endl;
    }
    else if(totalMax<sumTime)
    {
        cout<<"NO"<<endl;
    }
    else if(totalMax==sumTime)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<d; i++)
        {
            cout<<maxT[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        sumTime = sumTime-totalMin;
        int start = 0;
        while(sumTime)
        {
            if(sumTime>=(maxT[start]-minT[start]))
            {
                sumTime = sumTime - (maxT[start]-minT[start]);
                outArr[start] = maxT[start];
            }
            else if(sumTime<(maxT[start]-minT[start]))
            {
                outArr[start] = outArr[start]+sumTime;
                sumTime = 0;
            }
            start++;
        }
        for(int i=0; i<d; i++)
            cout<<outArr[i]<<" ";
    }
    return 0;
}
