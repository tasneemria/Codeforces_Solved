#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        gcd(b%a,a);
}

int main()
{
    int A,avg=0;
    cin>>A;
    int div,saveA;
    for(int i=2;i<A;i++)
    {
        saveA = A;
        while(saveA)
        {
            avg = avg+(saveA%i);
            saveA = saveA/i;
        }
    }

    div = A-2;
    int g = gcd(avg,div);
    cout<<avg/g<<"/"<<div/g;

    return 0;
}
