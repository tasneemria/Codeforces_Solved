#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< string,int > mymap;
    int n,k;
    cin>>n>>k;
    string str,pass;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        mymap[str] = str.length();
    }
    cin>>pass;
    int Llen=0,Hlen=0,Elen=0;
    map< string,int >::iterator it;
    for(it=mymap.begin(); it!=mymap.end(); it++)
    {
        if((it->second)<mymap[pass])
        {
            Llen++;
        }
        else if((it->second)>mymap[pass])
        {
            Hlen++;
        }
        else
        {
            Elen++;
        }
    }
    Elen--;
    int best,worst;
//    cout<<Llen<<endl;
//    cout<<Elen<<endl;

        best = Llen + (Llen/k)*5+1;
        cout<<best<<" ";

        Hlen = Llen+Elen;
        worst = Hlen + (Hlen/k)*5+1;
        cout<<worst<<endl;





    return 0;
}
