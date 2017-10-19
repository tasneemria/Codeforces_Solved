#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1,s2;
    vector<string> vt[n];
    for(int i=0;i<n;i++)
    {
        cin>>s1>>s2;
        vt[i].push_back(s1);
        vt[i].push_back(s2);
    }
    vector<string>::iterator it;
    for(int i=0;i<n;i++)
    {
        it = vt[i].begin();
        it++;
        if(*it=="rat")
        {
            it = vt[i].begin();
            cout<<*it<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        it = vt[i].begin();
        it++;
        if(*it=="woman" || *it=="child")
        {
            it = vt[i].begin();
            cout<<*it<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        it = vt[i].begin();
        it++;
        if(*it=="man")
        {
            it = vt[i].begin();
            cout<<*it<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        it = vt[i].begin();
        it++;
        if(*it=="captain")
        {
            it = vt[i].begin();
            cout<<*it<<endl;
        }
    }

    return 0;
}
/*
6
Jack captain
Alice woman
Charlie man
Teddy rat
Bob child
Julia woman
*/
