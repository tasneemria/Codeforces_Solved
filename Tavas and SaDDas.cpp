#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

void lucky(long long num,int four,int seven)
{
    if(num>1000000000)
        return;

    lucky(num*10+4,four+1,seven);
    lucky(num*10+7,four,seven+1);

    v.push_back(num);
}

int main()
{
    long long n;
    cin>>n;
    lucky(0,0,0);
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        if(n==v[i])
        {
            cout<<i<<endl;
            return 0;
        }
    }

}
