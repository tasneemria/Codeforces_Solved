#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int pass[n+1];
    for(int i=0; i<n; i++)
        cin>>pass[i];
    sort(pass,pass+n);
    reverse(pass,pass+n);
    int taxi = 0;
    for(int i=0,j=n-1; i<n && i<=j;)
    {
        if(i==j)
        {
            taxi++;
            i++;
            j--;
        }
        else if(pass[i]==4)
        {
            taxi++;
            i++;
        }
        else if(pass[i]+pass[j]==4)
        {
            taxi++;
            pass[i] = 5;
            pass[j] = 5;
            i++;
            j--;
        }
        else if(pass[i]+pass[j]>4)
        {

            if(pass[i]>=pass[j])
            {
                pass[i] = 5;
                taxi++;
                i++;
            }
            else
            {
                pass[j] = 5;
                taxi++;
                j--;
            }
        }
        else if(pass[i]+pass[j]<4)
        {
            pass[j-1]+=pass[j];
            pass[j] = 5;
            j--;
        }
    }
    cout<<taxi<<endl;

    return 0;
}
