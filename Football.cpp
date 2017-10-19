#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    map< string, int > mymap;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        mymap[str]++;
    }
    int goal=0;

    map< string ,int >::iterator it;
    for(it=mymap.begin();it!=mymap.end();it++)
    {
        if(goal<it->second)
        {
            goal = it->second;
        }
    }

    for(it=mymap.begin();it!=mymap.end();it++)
    {
        if(goal==it->second)
        {
            cout<<it->first<<endl;
            break;
        }
    }



    return 0;
}
