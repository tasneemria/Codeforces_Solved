#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr[100];
    arr[0] = "zero";
    arr[1] = "one";
    arr[2] = "two";
    arr[3] = "three";
    arr[4] = "four";
    arr[5] = "five";
    arr[6] = "six";
    arr[7] = "seven";
    arr[8] = "eight";
    arr[9] = "nine";
    arr[10] = "ten";
    arr[11] = "eleven";
    arr[12] = "twelve";
    arr[13] = "thirteen";
    arr[14] = "fourteen";
    arr[15] = "fifteen";
    arr[16] = "sixteen";
    arr[17] = "seventeen";
    arr[18] = "eighteen";
    arr[19] = "nineteen";
    arr[20] = "twenty";
    arr[30] = "thirty";
    arr[40] = "forty";
    arr[50] = "fifty";
    arr[60] = "sixty";
    arr[70] = "seventy";
    arr[80] = "eighty";
    arr[90] = "ninety";

    for(int i=21;i<100;i++)
    {
        if(i%10==0)
            continue;
        else
        {
            int a = i/10;
            int b = i%10;
            arr[i] = arr[a*10]+"-"+arr[b];
            //cout<<arr[i]<<endl;
        }
    }
    cout<<arr[n]<<endl;

    return 0;
}
