#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d,l,v1,v2,result;
    cin>>d>>l>>v1>>v2;

    result = (l-d)/(v1+v2);
    printf("%.20f",result);

    return 0;
}
