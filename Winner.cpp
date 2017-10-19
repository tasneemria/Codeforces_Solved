#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str[1000];
    int arr[1000];
    map< string, int > mp;
    int n;
    string inpStr;
    int inpNum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>inpStr>>inpNum;
        str[i] = inpStr;
        mp[inpStr] = 0;
        arr[i] = inpNum;
    }
    for(int i=0;i<n;i++)
    {
        mp[str[i]] = mp[str[i]]+arr[i];
        arr[i] = mp[str[i]];
    }

    string name;
    int maxScore = -9999999999;
    map<string,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(maxScore<=it->second)
        {
            maxScore = it->second;
        }
    }

    list<string> nameList;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==maxScore)
        {
            nameList.push_back(str[i]);
        }
    }

    list< string >::iterator it1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=maxScore)
        {
            for(it1=nameList.begin();it1!=nameList.end();it1++)
            {
                if(str[i]==(*it1))
                {
                    cout<<str[i]<<endl;
                    i = n;
                    break;
                }
            }
        }
    }
    return 0;
}

/*
15

aawtvezfntstrcpgbzjbf 681

zhahpvqiptvksnbjkdvmknb -74

aawtvezfntstrcpgbzjbf 661

jpdwmyke 474

aawtvezfntstrcpgbzjbf -547

aawtvezfntstrcpgbzjbf 600

zhahpvqiptvksnbjkdvmknb -11

jpdwmyke 711

bjmj 652

aawtvezfntstrcpgbzjbf -1000

aawtvezfntstrcpgbzjbf -171

bjmj -302

aawtvezfntstrcpgbzjbf 961

zhahpvqiptvksnbjkdvmknb 848

bjmj -735
*/





