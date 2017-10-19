#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long t;
    cin>>t;
    string str;
    cin>>str;
    int pnt,first=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='.')
        {
            pnt = i;
            break;
        }
    }
    int flag = 0;
    for(int i=pnt; i<n; i++)
    {
        if(str[i]>='5')
        {
            flag = 1;
            first = i;
            break;
        }
    }
    //cout<<flag<<endl;

    if(flag==0)
    {
        cout<<str<<endl;
    }
    else
    {
        string s = str.substr(0,first+1);
        //cout<<s<<endl;
        int i,j;
        int save = 0;
        for(i=first,j=t; i>pnt+1 && j>0; i--)
        {
            if(s[i]>='5')
            {
                s[i-1]++;
                s[i] = '0';
                j--;
                save = i-1;
            }
        }

        int extra = 0;

        if(i==pnt+1 && j>0)
        {
            if(s[i]>='5' && s[pnt-1]!='9')
            {
                s[pnt-1]++;
                s[i] = '0';
                save = pnt-1;
            }
            else if(s[i]>='5' && s[pnt-1]=='9')
            {
                extra = 1;
                string newst = str.substr(0,pnt);
                for(int nw=pnt-1;nw>=0;nw--)
                {
                    if(newst[nw]=='9')
                    {
                        newst[nw] = '0';
                    }
                    else
                    {
                        newst[nw]++;
                    }
                    if(newst[nw]!='0')
                    {
                        break;
                    }
                }
                if(newst[0]=='0')
                {
                    cout<<1<<newst<<endl;
                }
                else
                {
                    cout<<newst<<endl;
                }
            }
        }
        for(int i=0; i<=save && extra==0; i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}


/*
142

2704701300865535.432223312233434114130011113220102420131323010344144201124303144444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444447
*/
