#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

void luck(long long num,int four, int seven)
{
    if(num>10000000000)
        return;

    if(four==seven)
    {
        v.push_back(num);
    }

    luck(num*10+4,four+1,seven);
    luck(num*10+7,four,seven+1);
}

int main()
{
    long long n;
    cin>>n;
    luck(0,0,0);
    sort(v.begin(),v.end());

    vector<long long> :: iterator it;
    for(int i=0;i<v.size();i++)
    {
        //cout<<v[i]<<endl;
        if(v[i]>=n)
        {
            cout<<v[i]<<endl;
            return 0;
        }
    }

    return 0;
}
