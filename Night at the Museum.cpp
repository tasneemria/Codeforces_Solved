#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int total,Min,abslt;
    abslt = abs('a'-str[0]);
    total = min(abslt,26-abslt);
    for(int i=0;i<str.length()-1;i++)
    {
        abslt = abs(str[i]-str[i+1]);
        Min = min(abslt,26-abslt);
        //cout<<"MIN "<<Min<<endl;
        total = total+Min;
    }
    cout<<total<<endl;

    return 0;
}
