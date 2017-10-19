#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue< int > q;
    int bear;
    cin>>bear;
    for(int i=1;i<n;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    int t,vote=0;
    for(int i=0;;i++)
    {
        t = q.top();
        if(bear>t) break;
        q.pop();
        t--;
        vote++;
        bear++;
        q.push(t);
    }
    cout<<vote<<endl;

    return 0;
}
